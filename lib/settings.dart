import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:google_sign_in/google_sign_in.dart';
import 'user_model.dart';
import 'firebase_service.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class SettingsPopup extends StatefulWidget {
  final UnityWidgetController? controller;
  const SettingsPopup({super.key, this.controller});

  @override
  _SettingsPopupState createState() => _SettingsPopupState();
}

class _SettingsPopupState extends State<SettingsPopup> {
  double gameVolume = 0.8;
  double musicVolume = 0.6;

  final FirebaseService _firebaseService = FirebaseService();
  final FirebaseAuth _auth = FirebaseAuth.instance;
  final GoogleSignIn _googleSignIn = GoogleSignIn();

  Future<void> _signInWithGoogle() async {
    try {
      final GoogleSignInAccount? googleUser = await _googleSignIn.signIn();
      if (googleUser == null) return; // Canceled

      final GoogleSignInAuthentication googleAuth =
          await googleUser.authentication;

      final AuthCredential credential = GoogleAuthProvider.credential(
        accessToken: googleAuth.accessToken,
        idToken: googleAuth.idToken,
      );

      final UserCredential userCredential =
          await _auth.signInWithCredential(credential);

      final user = userCredential.user;
      print("Signed in user: ${user?.email}");

      if (user != null && user.email != null && user.email!.isNotEmpty) {
        final existingProgress =
            await _firebaseService.getUserProgress(user.email!);
        if (existingProgress == null) {
          final newProgress = UserProgress(
            email: user.email!,
            grassland: '',
            space: '',
            desert: '',
          );
          await _firebaseService.saveUserProgress(newProgress);
        } else {
          debugPrint("Existing user data found, skipping overwrite.");
        }
      }
    } catch (e) {
      print('Google Sign-In error: $e');
    }
  }

  Future<void> _signOut() async {
    await _googleSignIn.signOut();
    await _auth.signOut();
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: ClipRRect(
        borderRadius: BorderRadius.circular(20),
        child: BackdropFilter(
          filter: ImageFilter.blur(sigmaX: 10.0, sigmaY: 10.0),
          child: Container(
            width: 360,
            height: 540,
            padding: const EdgeInsets.all(20),
            decoration: BoxDecoration(
              color: Colors.green.shade100.withOpacity(0.8),
              borderRadius: BorderRadius.circular(20),
            ),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                Padding(
                  padding: const EdgeInsets.only(bottom: 2),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      const SizedBox(width: 30),
                      Center(
                        child: Text(
                          'Game Settings',
                          style: TextStyle(
                            fontSize: 38,
                            fontFamily: 'Jaini',
                            color: Colors.black,
                          ),
                        ),
                      ),
                      GestureDetector(
                        onTap: () => Navigator.pop(context),
                        child: Icon(
                          Icons.close_outlined,
                          color: Colors.white,
                          size: 32,
                        ),
                      ),
                    ],
                  ),
                ),
                const SizedBox(height: 22),
                _buildSliderRow(Icons.volume_up, 'Game Volume', gameVolume,
                    (val) {
                  setState(() => gameVolume = val);
                  widget.controller?.postMessage(
                    'GameManager',
                    'SetGameVolume',
                    val.toStringAsFixed(2), // value as string: 0.00 to 1.00
                  );
                }),
                const SizedBox(height: 16),
                _buildSliderRow(Icons.music_note, 'Music Volume', musicVolume,
                    (val) {
                  setState(() => musicVolume = val);
                }),
                const SizedBox(height: 24),
                Row(
                  children: [
                    Icon(Icons.account_circle, color: Colors.black, size: 28),
                    const SizedBox(width: 10),
                    Text(
                      'Account',
                      style: TextStyle(
                        fontFamily: 'Jaini',
                        fontSize: 26,
                        color: Colors.black,
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: 14),
                StreamBuilder<User?>(
                  stream: _auth.authStateChanges(),
                  builder: (context, snapshot) {
                    print(
                        "🔥 authStateChanges: ${snapshot.connectionState}, user: ${snapshot.data}");

                    if (snapshot.connectionState == ConnectionState.waiting) {
                      return CircularProgressIndicator();
                    }

                    final user = snapshot.data;

                    if (user == null) {
                      return GestureDetector(
                        onTap: _signInWithGoogle,
                        child: Container(
                          padding: const EdgeInsets.symmetric(
                              horizontal: 14, vertical: 14),
                          decoration: BoxDecoration(
                            color: Colors.green.shade400,
                            borderRadius: BorderRadius.circular(12),
                          ),
                          child: Row(
                            children: [
                              Image.asset(
                                'assets/images/google_logo.png',
                                width: 24,
                                height: 24,
                              ),
                              const SizedBox(width: 16),
                              Expanded(
                                child: Text(
                                  'Sign in with Google',
                                  style: TextStyle(
                                    color: Colors.white,
                                    fontFamily: 'Jaini',
                                    fontSize: 22,
                                  ),
                                ),
                              ),
                            ],
                          ),
                        ),
                      );
                    } else {
                      return Column(
                        crossAxisAlignment: CrossAxisAlignment.start,
                        children: [
                          Container(
                            padding: const EdgeInsets.symmetric(
                                horizontal: 14, vertical: 14),
                            decoration: BoxDecoration(
                              color: Colors.green.shade400,
                              borderRadius: BorderRadius.circular(12),
                            ),
                            child: Row(
                              children: [
                                Image.asset(
                                  'assets/images/google_logo.png',
                                  width: 24,
                                  height: 24,
                                ),
                                const SizedBox(width: 16),
                                Expanded(
                                  child: Text(
                                    'Logged in as ${user.displayName ?? user.email ?? "User"}',
                                    style: TextStyle(
                                      color: Colors.white,
                                      fontFamily: 'Jaini',
                                      fontSize: 22,
                                    ),
                                  ),
                                ),
                              ],
                            ),
                          ),
                          const SizedBox(height: 20),
                          GestureDetector(
                            onTap: _signOut,
                            child: Row(
                              mainAxisAlignment: MainAxisAlignment.end,
                              children: [
                                Icon(Icons.logout, color: Colors.red, size: 24),
                                const SizedBox(width: 8),
                                Text(
                                  'Logout',
                                  style: TextStyle(
                                    color: Colors.red,
                                    fontSize: 26,
                                    fontFamily: 'Jaini',
                                  ),
                                ),
                              ],
                            ),
                          ),
                        ],
                      );
                    }
                  },
                )
              ],
            ),
          ),
        ),
      ),
    );
  }

  Widget _buildSliderRow(IconData icon, String label, double value,
      ValueChanged<double> onChanged) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Row(
          children: [
            Icon(icon, color: Colors.black, size: 26),
            const SizedBox(width: 12),
            Text(
              label,
              style: TextStyle(
                fontSize: 26,
                fontFamily: 'Jaini',
                color: Colors.black,
              ),
            ),
          ],
        ),
        Slider(
          value: value,
          onChanged: onChanged,
          activeColor: Colors.green.shade700,
          inactiveColor: Colors.white,
        ),
      ],
    );
  }
}
