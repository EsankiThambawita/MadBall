import 'dart:ui';
import 'package:flutter/material.dart';
import 'unity_game_screen.dart';

class GrassInfoPage2 extends StatelessWidget {
  const GrassInfoPage2({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
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
      body: SafeArea(
        child: Stack(
          children: [
            // Background Image with Blur
            Positioned.fill(
              child: Container(
                decoration: BoxDecoration(
                  image: const DecorationImage(
                    image: AssetImage("assets/images/grass.png"),
                    fit: BoxFit.cover,
                    opacity: 0.5,
                  ),
                ),
                child: BackdropFilter(
                  filter: ImageFilter.blur(sigmaX: 500, sigmaY: 500),
                  child: Container(
                    color: Colors.black.withOpacity(0),
                  ),
                ),
              ),
            ),

            // Foreground content
            Column(
              children: [
                // Map Description
                Container(
                  height: 200,
                  width: double.infinity,
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
                        'Grasslands',
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 26,
                          color: Color.fromARGB(255, 2, 2, 2),
                        ),
                      ),
                      SizedBox(height: 8),
                      Text(
                        "Lush green terrain with hidden slopes and tricky turns. "
                        "Stay alert and strategize each shot through the soft grass and winding hills!",
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          fontSize: 20,
                          fontFamily: 'Jaini',
                          color: Color.fromARGB(255, 11, 11, 11),
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
                        backgroundColor:
                            const Color.fromARGB(255, 180, 244, 161),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 6,
                      ),
                      onPressed: () {
                        Navigator.pop(context);
                      },
                      child: const Text(
                        "CANCEL",
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 24,
                          color: Color.fromARGB(255, 19, 18, 18),
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
                        backgroundColor: const Color.fromARGB(255, 64, 218, 82),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(12),
                        ),
                        elevation: 6,
                      ),
                      onPressed: () {
                        Navigator.push(
                          context,
                          MaterialPageRoute(
                            builder: (context) => const UnityGameScreen(
                              sceneName: 'Grassland_2P',
                            ),
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
          ],
        ),
      ),
    );
  }
}

