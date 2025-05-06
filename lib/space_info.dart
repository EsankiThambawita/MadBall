import 'dart:ui';
import 'package:flutter/material.dart';

class SpaceInfoPage extends StatefulWidget {
  const SpaceInfoPage({super.key});

  @override
  State<SpaceInfoPage> createState() => _SpaceInfoPage();
}

class _SpaceInfoPage extends State<SpaceInfoPage> {
  double _difficulty = 0;  // Difficulty level: 0 (Easy), 50 (Medium), 100 (Hard)
  bool isEasyCompleted = false;
  bool isMediumCompleted = false;
  String message = "";  // Message to display based on user progress

  // Function to determine the face image based on difficulty
  String getFaceImage() {
    if (_difficulty == 0) {
      return 'assets/images/easy.png';
    } else if (_difficulty == 50) {
      return 'assets/images/medium.png';
    } else {
      return 'assets/images/hard.png';
    }
  }

  // Function to get the difficulty label based on value
  String getDifficultyLabel() {
    if (_difficulty == 0) {
      return "EASY";
    } else if (_difficulty == 50) {
      return "MEDIUM";
    } else {
      return "HARD";
    }
  }

  // Function to get button color based on difficulty
  Color getButtonColor() {
    if (_difficulty == 0) {
      return const Color(0xFF4BE843); // Green
    } else if (_difficulty == 50) {
      return const Color(0xFFFFE600); // Yellow
    } else {
      return const Color(0xFFE84141); // Red
    }
  }

  // Function to handle slider changes
  void handleSliderChange(double value) {
    if (value == 50 && !isEasyCompleted) {
      setState(() {
        _difficulty = 0;
        message = "Complete Easy to proceed to Medium";
      });
    } else if (value == 100 && !isMediumCompleted) {
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

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xCC70A4C2),
      appBar: AppBar(
        backgroundColor: Colors.transparent,
        elevation: 0,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back, color: Color.fromARGB(255, 0, 0, 0)),
          onPressed: () => Navigator.pop(context),
        ),
         actions: [
          // Updated the IconButton to navigate to mapselection_champ page
         IconButton(
  icon: const Icon(Icons.cancel, color: Colors.black),
  onPressed: () {
    Navigator.pop(context); // This will pop the current page from the stack
  },
),
        ],
        centerTitle: true,
        title: const Text(
          'Map Info',
          style: TextStyle(
            fontFamily: 'Jaini',
            fontSize: 28,
            color: Color.fromARGB(255, 250, 247, 247),
          ),
        ),
      ),
      body: Stack(
        fit: StackFit.expand,
        children: [
          Image.asset(
            "assets/images/space.jpg",
            fit: BoxFit.cover,
          ),
          BackdropFilter(
            filter: ImageFilter.blur(sigmaX: 500, sigmaY: 500),
            child: Container(
              color: Colors.black.withOpacity(0.2),
            ),
          ),
          SafeArea(
            child: Column(
              children: [
                if (message.isNotEmpty)
                  Container(
                    padding: const EdgeInsets.all(12),
                    margin: const EdgeInsets.all(8),
                    decoration: BoxDecoration(
                      color: Colors.white,
                      borderRadius: BorderRadius.circular(8),
                      border: Border.all(color: const Color.fromARGB(255, 246, 245, 245)),
                    ),
                    child: Text(
                      message,
                      style: const TextStyle(
                        fontSize: 16,
                        color: Colors.black,
                        fontFamily: 'Jaini',
                      ),
                    ),
                  ),
                Container(
                  margin: const EdgeInsets.all(16),
                  padding: const EdgeInsets.all(12),
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(12),
                    image: const DecorationImage(
                      image: AssetImage("assets/images/space.jpg"),
                      fit: BoxFit.cover,
                      opacity: 0.8,
                    ),
                  ),
                  child: const Column(
                    children: [
                      Text(
                        'Space',
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 26,
                          color: Colors.white,
                        ),
                      ),
                      SizedBox(height: 8),
                      Text(
                        "Explore the vast emptiness of space. Navigate through cosmic obstacles and engage in interstellar challenges!",
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          fontSize: 20,
                          fontFamily: 'Jaini',
                          color: Colors.white,
                        ),
                      ),
                    ],
                  ),
                ),
                const SizedBox(height: 16),
                Image.asset(
                  getFaceImage(),
                  width: 80,
                  height: 80,
                ),
                const SizedBox(height: 10),
                Text(
                  getDifficultyLabel(),
                  style: const TextStyle(
                    fontFamily: 'Jaini',
                    fontSize: 24,
                    color: Color.fromARGB(255, 244, 242, 242),
                  ),
                ),
                const SizedBox(height: 16),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 24),
                  child: Column(
                    children: [
                      Slider(
                        value: _difficulty,
                        min: 0,
                        max: 100,
                        divisions: 2,
                        activeColor: getButtonColor(),
                        onChanged: (value) {
                          handleSliderChange(value);
                        },
                      ),
                      const Text(
                        "Drag to adjust difficulty",
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 16,
                          color: Color.fromARGB(255, 244, 243, 243),
                        ),
                      ),
                    ],
                  ),
                ),
                const Spacer(),
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
                        if (_difficulty == 0) {
                          setState(() {
                            isEasyCompleted = true;
                          });
                        } else if (_difficulty == 50) {
                          setState(() {
                            isMediumCompleted = true;
                          });
                        }
                        // TODO: Start game logic here
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
