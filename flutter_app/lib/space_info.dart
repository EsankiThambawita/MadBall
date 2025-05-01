import 'package:flutter/material.dart';

class SpaceInfoPage extends StatefulWidget {
  const SpaceInfoPage({super.key});

  @override
  State<SpaceInfoPage> createState() => _SpaceInfoPage();
}

class _SpaceInfoPage extends State<SpaceInfoPage> {
  double _difficulty = 0;

  String getFaceImage() {
    if (_difficulty < 33) {
      return 'assets/images/easy.png';
    } else if (_difficulty < 66) {
      return 'assets/images/medium.png';
    } else {
      return 'assets/images/hard.png';
    }
  }

  String getDifficultyLabel() {
    if (_difficulty < 33) {
      return "EASY";
    } else if (_difficulty < 66) {
      return "MEDIUM";
    } else {
      return "HARD";
    }
  }

  Color getButtonColor() {
    if (_difficulty < 33) {
      return const Color(0xFF4BE843); // Green
    } else if (_difficulty < 66) {
      return const Color(0xFFFFE600); // Yellow
    } else {
      return const Color(0xFFE84141); // Red
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xCC70A4C2), // 80% opacity
 // Solid background
      appBar: AppBar(
        backgroundColor: Colors.transparent,
        elevation: 0,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back, color: Colors.black),
          onPressed: () => Navigator.pop(context),
        ),
        centerTitle: true,
        title: const Text(
          'Game Info',
          style: TextStyle(
            fontFamily: 'Jaini',
            fontSize: 28,
            color: Colors.black,
          ),
        ),
      ),
      body: SafeArea(
        child: Column(
          children: [
            /// Map name and description
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
        'Desert',
        style: TextStyle(
          fontFamily: 'Jaini',
          fontSize: 26,
          color: Colors.white,
        ),
      ),
      SizedBox(height: 8),
      Text(
        "A wide, open field where sudden winds randomly sweep across the map. "
        "Control your ball, outmaneuver your opponent, and use the shifting winds to your advantage!",
        textAlign: TextAlign.center,
        style: TextStyle(
          fontSize: 14,
          color: Colors.white,
        ),
      ),
    ],
  ),
),


            const SizedBox(height: 16),

            /// Face Image
            Image.asset(
              getFaceImage(),
              width: 80,
              height: 80,
            ),

            const SizedBox(height: 10),

            /// Difficulty Label
            Text(
              getDifficultyLabel(),
              style: const TextStyle(
                fontFamily: 'Jaini',
                fontSize: 24,
                color: Colors.black,
              ),
            ),

            const SizedBox(height: 16),

            /// Difficulty Slider
            Padding(
              padding: const EdgeInsets.symmetric(horizontal: 24),
              child: Column(
                children: [
                  Slider(
                    value: _difficulty,
                    min: 0,
                    max: 100,
                    divisions: 100,
                    activeColor: getButtonColor(),
                    onChanged: (value) {
                      setState(() {
                        _difficulty = value;
                      });
                    },
                  ),
                  const Text(
                    "Drag to adjust difficulty",
                    style: TextStyle(
                      fontFamily: 'Jaini',
                      fontSize: 16,
                      color: Colors.black,
                    ),
                  ),
                ],
              ),
            ),

            const Spacer(),

            /// Play Button
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
                    // Start the game with selected difficulty
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
    );
  }
}
