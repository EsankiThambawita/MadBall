import 'dart:ui';
import 'package:flutter/material.dart';

class DesertInfoPage2 extends StatefulWidget {
  const DesertInfoPage2({super.key});

  @override
  State<DesertInfoPage2> createState() => _DesertInfoPage2();
}

class _DesertInfoPage2 extends State<DesertInfoPage2> {
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
            "assets/images/dessert.png",
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
                // AppBar
                AppBar(
                  backgroundColor: Colors.transparent,
                  elevation: 0,
                  leading: IconButton(
                    icon: const Icon(Icons.arrow_back, color: Colors.black),
                    onPressed: () => Navigator.pop(context),
                  ),
                  centerTitle: true,
                  title: const Text(
                    'Map Info',
                    style: TextStyle(
                      fontFamily: 'Jaini',
                      fontSize: 28,
                      color: Colors.black,
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
                      image: AssetImage("assets/images/dessert.png"),
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
                          color: Color.fromARGB(255, 8, 8, 8),
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
                          color: Color.fromARGB(255, 2, 2, 2),
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
                        backgroundColor: const Color.fromARGB(226, 228, 145, 128), // Red color for cancel
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 6,
                      ),
                      onPressed: () {
                        Navigator.pop(context); // Cancel and go back
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

                const SizedBox(height: 10),

                // Play Button
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 32),
                  child: SizedBox(
                    width: double.infinity,
                    height: 50,
                    child: ElevatedButton(
                      style: ElevatedButton.styleFrom(
                        backgroundColor: const Color.fromARGB(255, 90, 45, 6), // Peaceful Blue color for play
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 6,
                      ),
                      onPressed: () {
                        // Start the game logic goes here
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
