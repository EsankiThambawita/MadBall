import 'dart:ui';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';


class GrassInfoPage extends StatefulWidget {
  const GrassInfoPage({super.key});

  @override
  State<GrassInfoPage> createState() => _GrassInfoPage();
}

class _GrassInfoPage extends State<GrassInfoPage> {
  double _difficulty = 0;
  bool isEasyCompleted = false;
  bool isMediumCompleted = false;
  String message = "";
  UnityWidgetController? _unityWidgetController;

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
      return const Color(0xFF4BE843); // Green
    } else if (_difficulty < 100) {
      return const Color(0xFFFFE600); // Yellow
    } else {
      return const Color(0xFFE84141); // Red
    }
  }

  void handleSliderChange(double value) {
    if (value >= 50 && !isEasyCompleted) {
      setState(() {
        _difficulty = 0;
        message = "Complete Easy to proceed to Medium";
      });
    } else if (value >= 100 && !isMediumCompleted) {
      setState(() {
        _difficulty = 50;
        message = "Complete Medium to proceed to Hard";
      });
    } else {
      setState(() {
        _difficulty = value;
        message = "";
      });
    }
  }

  void onUnityCreated(UnityWidgetController controller) {
    _unityWidgetController = controller;
  }

  void loadGrasslandScene() {
    _unityWidgetController?.postMessage(
        'GameManager', // GameObject name in Unity
        'LoadScene', // Method name in Unity
        'Grassland_1P' // Scene name to load
        );
  }


  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.transparent,
      extendBodyBehindAppBar: true,
      body: Stack(
        fit: StackFit.expand,
        children: [
          // Background Image
          Image.asset(
            "assets/images/grass.png",
            fit: BoxFit.cover,
          ),

          // Blur effect
          BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 8.0, sigmaY: 8.0),
            child: Container(
              color: Colors.black.withOpacity(0.2), // Optional dimming
            ),
          ),

          // Main content
          SafeArea(
            child: Column(
              children: [
                // AppBar with cancel button in the right corner
                AppBar(
                  backgroundColor: Colors.transparent,
                  elevation: 0,
                  leading: IconButton(
                    icon: const Icon(Icons.arrow_back, color: Colors.black),
                    onPressed: () => Navigator.pop(context),
                  ),
                  actions: [
                    IconButton(
                      icon: const Icon(Icons.cancel, color: Colors.black),
                      onPressed: () {
                        // Handle cancel action here
                        Navigator.pop(
                            context); // This will pop the current page
                      },
                    ),
                  ],
                  centerTitle: true,
                  title: const Text(
                    'Map Info',
                    style: TextStyle(
                      fontFamily: 'Jaini',
                      fontSize: 28,
                      color: Color.fromARGB(255, 241, 239, 239),
                    ),
                  ),
                ),

                // Display the message if any
                if (message.isNotEmpty)
                  Container(
                    padding: const EdgeInsets.all(12),
                    margin: const EdgeInsets.all(8),
                    decoration: BoxDecoration(
                      color: Colors.white,
                      borderRadius: BorderRadius.circular(8),
                      border: Border.all(
                          color: const Color.fromARGB(255, 255, 255, 255)),
                    ),
                    child: Text(
                      message,
                      style: const TextStyle(
                        fontSize: 16,
                        color: Color.fromARGB(255, 16, 15, 15),
                        fontFamily: 'Jaini',
                      ),
                    ),
                  ),

                // Map description
                Container(
                  margin: const EdgeInsets.all(16),
                  padding: const EdgeInsets.all(12),
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(12),
                    image: const DecorationImage(
                      image: AssetImage("assets/images/grass.png"),
                      fit: BoxFit.cover,
                      opacity: 0.8,
                    ),
                  ),
                  child: const Column(
                    children: [
                      Text(
                        'Grass',
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 26,
                          color: Color.fromARGB(255, 255, 255, 255),
                        ),
                      ),
                      SizedBox(height: 8),
                      Text(
                        "A wide, open field where sudden winds randomly sweep across the map. "
                        "Control your ball, outmaneuver your opponent, and use the shifting winds to your advantage!",
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          fontSize: 20,
                          fontFamily: 'Jaini',
                          color: Color.fromARGB(255, 252, 247, 247),
                        ),
                      ),
                    ],
                  ),
                ),

                const SizedBox(height: 16),

                // Face Image based on difficulty
                Image.asset(
                  getFaceImage(),
                  width: 80,
                  height: 80,
                ),

                const SizedBox(height: 10),

                // Difficulty Label
                Text(
                  getDifficultyLabel(),
                  style: const TextStyle(
                    fontFamily: 'Jaini',
                    fontSize: 24,
                    color: Color.fromARGB(255, 243, 241, 241),
                  ),
                ),

                const SizedBox(height: 16),

                // Difficulty Slider
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 24),
                  child: Column(
                    children: [
                      Slider(
                        value: _difficulty,
                        min: 0,
                        max: 100,
                        divisions: 2, // 2 divisions for 0-50 and 50-100
                        activeColor: getButtonColor(),
                        onChanged: handleSliderChange,
                      ),
                      const Text(
                        "Drag to adjust difficulty",
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 16,
                          color: Color.fromARGB(255, 241, 240, 240),
                        ),
                      ),
                    ],
                  ),
                ),

                const Spacer(),

                // Play Button
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 32),
                  child: SizedBox(
                    width: double.infinity,
                    height: 50,
                    child: ElevatedButton(
                      style: ElevatedButton.styleFrom(
                        backgroundColor: getButtonColor(),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 6,
                      ),
                      onPressed: () {
                        if (_difficulty < 50) {
                          setState(() {
                            isEasyCompleted = true;
                          });
                        } else if (_difficulty >= 50) {
                          if (!isEasyCompleted) {
                            setState(() {
                              message = "Complete Easy to proceed to Medium";
                            });
                            return;
                          } else {
                            setState(() {
                              isMediumCompleted = true;
                            });
                          }
                        }

                        // 🎮 Load Unity scene
                        loadGrasslandScene();

                        // Navigate to Unity view (optional, if in a separate page)
                        Navigator.push(
                          context,
                          MaterialPageRoute(
                            builder: (context) =>
                                UnityGameScreen(onUnityCreated: onUnityCreated),
                          ),
                        );
                      },
                      child: const Text(
                        "PLAY",
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 24,
                          color: Colors.white,
                        ),
                      ),
                    ),
                  ),
                ),

                const SizedBox(height: 20),
              ],
            ),
          ),
        ],
      ),
    );
  }
}

class UnityGameScreen extends StatelessWidget {
  final Function(UnityWidgetController) onUnityCreated;

  const UnityGameScreen({super.key, required this.onUnityCreated});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: UnityWidget(onUnityCreated: onUnityCreated),
    );
  }
}
