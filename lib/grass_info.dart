import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'unity_game_screen.dart';

class GrassInfoPage extends StatefulWidget {
  const GrassInfoPage({super.key});

  @override
  State<GrassInfoPage> createState() => _GrassInfoPageState();
}

class _GrassInfoPageState extends State<GrassInfoPage> {
  double _difficulty = 0;
  double _maxDifficultyAllowed = 0;
  String message = "";
  bool _isLoading = true;

  @override
  void initState() {
    super.initState();
    fetchGrasslandProgress();
  }

  Future<void> fetchGrasslandProgress() async {
    final user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      final email = user.email;
      final doc =
          await FirebaseFirestore.instance.collection('users').doc(email).get();
      if (doc.exists && doc.data() != null) {
        final progress = doc.data()!['grassland'] ?? '';
        double allowed = 0;
        if (progress == "easy") {
          allowed = 50;
        } else if (progress == "medium" || progress == "hard") {
          allowed = 100;
        }
        setState(() {
          _maxDifficultyAllowed = allowed;
          _difficulty = allowed;
          _isLoading = false;
        });
      } else {
        setState(() {
          _maxDifficultyAllowed = 0;
          _difficulty = 0;
          _isLoading = false;
        });
      }
    } else {
      setState(() {
        _maxDifficultyAllowed = 0;
        _difficulty = 0;
        _isLoading = false;
      });
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
        } else {
          message = "";
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
    if (_isLoading) {
      return const Scaffold(body: Center(child: CircularProgressIndicator()));
    }

    return Scaffold(
      body: Stack(
        children: [
          Positioned.fill(
            child: Image.asset("assets/images/grass.png", fit: BoxFit.cover),
          ),
          Positioned.fill(
            child: BackdropFilter(
              filter: ImageFilter.blur(sigmaX: 8, sigmaY: 8),
              child: Container(color: Colors.black.withOpacity(0.2)),
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
                        icon: const Icon(Icons.arrow_back, color: Colors.black),
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
                              color: Colors.white,
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
                  const SizedBox(height: 20),
                  Container(
                    width: double.infinity,
                    padding: const EdgeInsets.symmetric(
                        horizontal: 16, vertical: 16),
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(16),
                      image: const DecorationImage(
                        image: AssetImage("assets/images/grass.png"),
                        fit: BoxFit.cover,
                      ),
                      color: Colors.white.withOpacity(0.15),
                    ),
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      children: const [
                        Text(
                          "Grass",
                          style: TextStyle(
                            fontSize: 22,
                            fontFamily: 'Jaini',
                            fontWeight: FontWeight.bold,
                            color: Colors.white,
                          ),
                        ),
                        SizedBox(height: 10),
                        Text(
                          "A wide, open field where sudden winds randomly sweep across the map. Control your ball, outmaneuver your opponent, and use the shifting winds to your advantage!",
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
                    activeColor: getButtonColor(),
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
                      Navigator.push(
                        context,
                        MaterialPageRoute(
                          builder: (context) =>
                              UnityGameScreen(sceneName: 'Grassland_1P'),
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
