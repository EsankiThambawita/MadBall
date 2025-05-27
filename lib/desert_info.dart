import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'unity_game_screen.dart';

class DesertInfoPage extends StatefulWidget {
  const DesertInfoPage({Key? key}) : super(key: key);

  @override
  State<DesertInfoPage> createState() => _DesertInfoPageState();
}

class _DesertInfoPageState extends State<DesertInfoPage> {
  double _difficulty = 0;
  double _maxDifficultyAllowed = 0;
  String message = "";

  @override
  void initState() {
    super.initState();
    fetchDesertProgress();
  }

  Future<void> fetchDesertProgress() async {
    final user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      final email = user.email;
      if (email != null) {
        final doc = await FirebaseFirestore.instance
            .collection('users')
            .doc(email)
            .get();

        if (doc.exists && doc.data() != null) {
          final progress = doc.data()!['desert'] ?? '';

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
  }

  String getFaceImage() {
    if (_difficulty < 50) {
      return 'assets/images/easy.png';
    } else if (_difficulty < 100) {
      return 'assets/images/medium.png';
    } else {
      return 'assets/images/hard.png';
    }
  }

  String getDifficultyLabel() {
    if (_difficulty < 50) {
      return "EASY";
    } else if (_difficulty < 100) {
      return "MEDIUM";
    } else {
      return "HARD";
    }
  }

  Color getButtonColor() {
    if (_difficulty < 50) {
      return const Color(0xFF4BE843);
    } else if (_difficulty < 100) {
      return const Color(0xFFFFE600);
    } else {
      return const Color(0xFFE84141);
    }
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
      backgroundColor: Colors.transparent,
      extendBodyBehindAppBar: true,
      body: Stack(
        fit: StackFit.expand,
        children: [
          Image.asset(
            "assets/images/dessert.png",
            fit: BoxFit.cover,
          ),
          BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 8.0, sigmaY: 8.0),
            child: Container(
              color: Colors.black.withOpacity(0.2),
            ),
          ),
          SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 40),
              child: Column(
                children: [
                  Row(
                    children: [
                      IconButton(
                        icon: const Icon(Icons.arrow_back, color: Colors.black),
                        onPressed: () => Navigator.pop(context),
                      ),
                      const Expanded(
                        child: Center(
                          child: Text(
                            "Map Info",
                            style: TextStyle(
                              fontFamily: 'Jaini',
                              fontSize: 28,
                              color: Colors.black,
                            ),
                          ),
                        ),
                      ),
                      GestureDetector(
                        onTap: () => Navigator.pop(context),
                        child: Container(
                          decoration: const BoxDecoration(
                            color: Colors.black,
                            shape: BoxShape.circle,
                          ),
                          padding: const EdgeInsets.all(8),
                          child: const Icon(Icons.close,
                              color: Colors.white, size: 12),
                        ),
                      ),
                    ],
                  ),
                  if (message.isNotEmpty)
                    Container(
                      padding: const EdgeInsets.all(12),
                      margin: const EdgeInsets.only(top: 10, bottom: 16),
                      decoration: BoxDecoration(
                        color: Colors.white.withOpacity(0.9),
                        borderRadius: BorderRadius.circular(8),
                      ),
                      child: Text(
                        message,
                        style: const TextStyle(
                          fontSize: 16,
                          color: Colors.black,
                          fontFamily: 'Jaini',
                        ),
                        textAlign: TextAlign.center,
                      ),
                    ),
                  Container(
                    padding: const EdgeInsets.symmetric(
                        horizontal: 16, vertical: 16),
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(16),
                      image: const DecorationImage(
                        image: AssetImage("assets/images/dessert.png"),
                        fit: BoxFit.cover,
                        opacity: 0.8,
                      ),
                      color: Colors.white.withOpacity(0.15),
                    ),
                    child: const Column(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        Text(
                          'Desert',
                          style: TextStyle(
                            fontFamily: 'Jaini',
                            fontSize: 22,
                            fontWeight: FontWeight.bold,
                            color: Colors.white,
                          ),
                        ),
                        SizedBox(height: 10),
                        Text(
                          "A wide, open field where sudden winds randomly sweep across the map. Control your ball, outmaneuver your opponent, and use the shifting winds to your advantage!",
                          textAlign: TextAlign.center,
                          style: TextStyle(
                            fontSize: 16,
                            fontFamily: 'Jaini',
                            color: Colors.white,
                          ),
                        ),
                      ],
                    ),
                  ),
                  const SizedBox(height: 30),
                  Image.asset(
                    getFaceImage(),
                    height: 80,
                  ),
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
                              UnityGameScreen(sceneName: 'Desert_1P'),
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
