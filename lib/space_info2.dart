import 'dart:ui';
import 'package:flutter/material.dart';
import 'unity_game_screen.dart';

class SpaceInfoPage2 extends StatefulWidget {
  const SpaceInfoPage2({super.key});

  @override
  State<SpaceInfoPage2> createState() => _SpaceInfoPage2();
}

class _SpaceInfoPage2 extends State<SpaceInfoPage2> {
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

                const Spacer(),

                // Cancel Button
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 32),
                  child: SizedBox(
                    width: double.infinity,
                    height: 50,
                    child: ElevatedButton(
                      style: ElevatedButton.styleFrom(
                        backgroundColor: const Color.fromARGB(255, 108, 107, 131),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 4,
                      ),
                      onPressed: () {
                        Navigator.pop(context);
                      },
                      child: const Text(
                        "CANCEL",
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 24,
                          color: Colors.white,
                        ),
                      ),
                    ),
                  ),
                ),

                const SizedBox(height: 12),

                // Play Button
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 32),
                  child: SizedBox(
                    width: double.infinity,
                    height: 50,
                    child: ElevatedButton(
                      style: ElevatedButton.styleFrom(
                        backgroundColor: const Color.fromARGB(255, 38, 39, 70), // Default green
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 6,
                      ),
                      onPressed: () {
                        Navigator.push(
                          context,
                          MaterialPageRoute(
                            builder: (context) =>
                                UnityGameScreen(sceneName: 'Space_2P'),
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
