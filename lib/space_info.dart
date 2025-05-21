import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'unity_game_screen.dart';

class SpaceInfoPage extends StatefulWidget {
  const SpaceInfoPage({Key? key}) : super(key: key);

  @override
  State<SpaceInfoPage> createState() => _SpaceInfoPageState();
}

class _SpaceInfoPageState extends State<SpaceInfoPage> {
  double _difficulty = 0;
  double _maxDifficultyAllowed = 0;
  String message = "";

  @override
  void initState() {
    super.initState();
    fetchSpaceProgress();
  }

  Future<void> fetchSpaceProgress() async {
    final user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      final email = user.email;
      final doc =
          await FirebaseFirestore.instance.collection('users').doc(email).get();

      if (doc.exists && doc.data() != null) {
        final progress = doc.data()!['space'] ?? '';

        double allowed = 0;
        if (progress == "easy") {
          allowed = 50;
        } else if (progress == "medium" || progress == "hard") {
          allowed = 100;
        }

        setState(() {
          _maxDifficultyAllowed = allowed;
          _difficulty = allowed;
        });
      }
    }
  }

  String getFaceImage() {
    if (_difficulty < 50) return 'assets/images/easy.png';
    if (_difficulty < 100) return 'assets/images/medium.png';
    return 'assets/images/hard.png';
  }

  String getDifficultyLabel() {
    if (_difficulty < 50) return "EASY";
    if (_difficulty < 100) return "MEDIUM";
    return "HARD";
  }

  Color getButtonColor() {
    if (_difficulty < 50) return const Color(0xFF4BE843);
    if (_difficulty < 100) return const Color(0xFFFFE600);
    return const Color(0xFFE84141);
  }

  void handleSliderChange(double value) {
    if (value > _maxDifficultyAllowed) {
      setState(() {
        _difficulty = _maxDifficultyAllowed;
        if (_difficulty == 0) {
          message = "Complete Easy to unlock Medium";
        } else if (_difficulty == 50) {
          message = "Complete Medium to unlock Hard";
        }
      });
      return;
    }

    setState(() {
      _difficulty = value;
      message = "";
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          Positioned.fill(
            child: Image.asset("assets/images/space.jpg", fit: BoxFit.cover),
          ),
          Positioned.fill(
            child: BackdropFilter(
              filter: ImageFilter.blur(sigmaX: 70, sigmaY: 80),
              child: Container(
                  color:
                      const Color.fromARGB(255, 249, 249, 249).withOpacity(0)),
            ),
          ),
          SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 40),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.center,
                children: [
                  Row(
                    children: [
                      IconButton(
                        icon: const Icon(Icons.arrow_back,
                            color: Color.fromARGB(255, 246, 245, 245)),
                        onPressed: () => Navigator.pop(context),
                      ),
                      const Expanded(
                        child: Center(
                          child: Text(
                            "Map Info",
                            style: TextStyle(
                              fontSize: 24,
                              fontFamily: 'Jaini',
                              fontWeight: FontWeight.bold,
                              color: Color.fromARGB(255, 248, 247, 247),
                            ),
                          ),
                        ),
                      ),
                      GestureDetector(
                        onTap: () => Navigator.pop(context),
                        child: Container(
                          decoration: const BoxDecoration(
                            color: Color.fromARGB(255, 248, 247, 247),
                            shape: BoxShape.circle,
                          ),
                          padding: const EdgeInsets.all(8),
                          child: const Icon(Icons.close,
                              color: Color.fromARGB(255, 11, 11, 11), size: 12),
                        ),
                      ),
                    ],
                  ),
                  const SizedBox(height: 20),
                  Container(
                    width: double.infinity,
                    padding: const EdgeInsets.symmetric(
                        horizontal: 16, vertical: 16),
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(16),
                      image: const DecorationImage(
                        image: AssetImage("assets/images/space.jpg"),
                        fit: BoxFit.cover,
                      ),
                      color: Colors.white.withOpacity(0.15),
                    ),
                    child: const Column(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        Text(
                          "Space",
                          style: TextStyle(
                            fontSize: 22,
                            fontFamily: 'Jaini',
                            fontWeight: FontWeight.bold,
                            color: Colors.white,
                          ),
                        ),
                        SizedBox(height: 10),
                        Text(
                          "A zero-gravity map where your ball floats and drifts through asteroid fields. Use bounce physics, warp zones, and speed boosts to outwit your opponent!",
                          style: TextStyle(
                            fontSize: 16,
                            fontFamily: 'Jaini',
                            color: Colors.white,
                          ),
                          textAlign: TextAlign.center,
                        ),
                      ],
                    ),
                  ),
                  const SizedBox(height: 30),
                  Image.asset(getFaceImage(), height: 80),
                  const SizedBox(height: 10),
                  Text(
                    getDifficultyLabel(),
                    style: const TextStyle(
                      fontSize: 20,
                      fontFamily: 'Jaini',
                      color: Colors.white,
                    ),
                  ),
                  Slider(
                    value: _difficulty,
                    onChanged: handleSliderChange,
                    min: 0,
                    max: 100,
                    divisions: 2,
                    activeColor: Colors.white,
                    inactiveColor: Colors.white.withOpacity(0.5),
                  ),
                  const Text(
                    "Drag to adjust difficulty",
                    style: TextStyle(
                      fontSize: 14,
                      fontFamily: 'Jaini',
                      color: Colors.white,
                    ),
                  ),
                  if (message.isNotEmpty)
                    Container(
                      margin: const EdgeInsets.only(top: 10),
                      padding: const EdgeInsets.symmetric(
                          horizontal: 12, vertical: 8),
                      decoration: BoxDecoration(
                        color: Colors.white.withOpacity(0.9),
                        borderRadius: BorderRadius.circular(8),
                      ),
                      child: Text(
                        message,
                        style: const TextStyle(
                          color: Colors.black87,
                          fontSize: 14,
                          fontFamily: 'Jaini',
                        ),
                        textAlign: TextAlign.center,
                      ),
                    ),
                  const Spacer(),
                  ElevatedButton(
                    style: ElevatedButton.styleFrom(
                      backgroundColor: getButtonColor(),
                      minimumSize: const Size(double.infinity, 50),
                      shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(12),
                      ),
                    ),
                    onPressed: () {
                      String selectedDifficulty;
                      if (_difficulty < 50) {
                        selectedDifficulty = "easy";
                      } else if (_difficulty < 100) {
                        selectedDifficulty = "medium";
                      } else {
                        selectedDifficulty = "hard";
                      }
                      Navigator.push(
                        context,
                        MaterialPageRoute(
                          builder: (context) =>
                              UnityGameScreen(sceneName: 'Space_1P'),
                        ),
                      );
                    },
                    child: const Text(
                      "PLAY",
                      style: TextStyle(
                        fontSize: 20,
                        fontWeight: FontWeight.bold,
                        fontFamily: 'Jaini',
                        color: Colors.white,
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}
