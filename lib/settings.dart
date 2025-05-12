import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:google_sign_in/google_sign_in.dart';
import 'user_model.dart';
import 'firebase_service.dart';

class SettingsPopup extends StatefulWidget {
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
      if (user != null) {
        // Save user email to Firestore with default values
        final userProgress = UserProgress(
          email: user.email ?? '',
          grassland: '',
          space: '',
          desert: '',
        );
        await _firebaseService.saveUserProgress(userProgress);
      }

      setState(() {});
    } catch (e) {
      print('Google Sign-In error: $e');
    }
  }

  Future<void> _signOut() async {
    await _googleSignIn.signOut();
    await _auth.signOut();
    setState(() {});
  }

  @override
  Widget build(BuildContext context) {
    final User? user = FirebaseAuth.instance.currentUser;

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

                /// Sign-in / Account Info section
                user == null
                    ? GestureDetector(
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
                      )
                    : Column(
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
                                    'Logged in as ${user.displayName ?? "User"}',
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
                      ),
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
