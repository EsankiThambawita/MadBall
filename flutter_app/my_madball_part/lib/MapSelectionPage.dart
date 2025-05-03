import 'package:flutter/material.dart';
import 'grass_info.dart';
import 'desert_info.dart';
import 'space_info.dart';

class MapSelectionPage extends StatelessWidget {
  final String gameMode;

  const MapSelectionPage({super.key, required this.gameMode});

  void _navigateToInfo(BuildContext context, String mapName) {
    Widget page;
    switch (mapName) {
      case 'Grass Plains':
        page = const GrassInfoPage();
        break;
      case 'Desert':
        page = const DesertInfoPage();
        break;
      case 'Space':
        page = const SpaceInfoPage();
        break;
      default:
        page = Scaffold(
          appBar: AppBar(title: const Text('Unknown')),
          body: Center(child: Text('No info available for $mapName')),
        );
    }

    Navigator.push(
      context,
      MaterialPageRoute(builder: (context) => page),
    );
  }

  Widget buildMapCard({
    required BuildContext context,
    required String title,
    required String stars,
    required String imagePath,
    required Color bgColor,
    required bool isLocked,
  }) {
    return Container(
      margin: const EdgeInsets.symmetric(vertical: 10),
      padding: const EdgeInsets.symmetric(horizontal: 16),
      height: 100,
      decoration: BoxDecoration(
        color: bgColor,
        borderRadius: BorderRadius.circular(16),
        image: DecorationImage(
          image: AssetImage(imagePath),
          fit: BoxFit.cover,
          opacity: 0.3,
        ),
      ),
      child: Row(
        children: [
          const SizedBox(width: 10),
          Expanded(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(
                  title,
                  style: const TextStyle(
                    fontFamily: 'Jaini',
                    fontSize: 22,
                    color: Colors.white,
                  ),
                ),
                const SizedBox(height: 8),
                Row(
                  children: [
                    Text(
                      stars,
                      style: const TextStyle(color: Colors.white, fontSize: 16),
                    ),
                    const SizedBox(width: 10),
                    const Text(
                      "20,019",
                      style: TextStyle(color: Colors.white, fontSize: 16),
                    )
                  ],
                )
              ],
            ),
          ),
          IconButton(
            icon: const Icon(Icons.play_arrow, color: Colors.white, size: 36),
            onPressed: isLocked ? null : () => _navigateToInfo(context, title),
          ),
        ],
      ),
    );
  }

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
        title: Text(
          "Map Selection: ${gameMode[0].toUpperCase()}${gameMode.substring(1)}",
          style: const TextStyle(
            fontFamily: 'Jaini',
            fontSize: 24,
            color: Colors.black,
          ),
        ),
        centerTitle: true,
      ),
      extendBodyBehindAppBar: true,
      body: Stack(
        children: [
          /// Background
          Positioned.fill(
            child: Image.asset(
              "assets/images/mapbackground.jpg",
              fit: BoxFit.cover,
            ),
          ),

          /// Foreground content
          SafeArea(
            child: Padding(
              padding: const EdgeInsets.all(16),
              child: Column(
                children: [
                  const SizedBox(height: 20),

                  buildMapCard(
                    context: context,
                    title: "Grass Plains",
                    stars: "★★★",
                    imagePath: "assets/images/grass.png",
                    bgColor: const Color(0xFF68B729),
                    isLocked: false,
                  ),
                  buildMapCard(
                    context: context,
                    title: "Desert",
                    stars: "★☆☆",
                    imagePath: "assets/images/dessert.png",
                    bgColor: const Color(0xFFEED9B6),
                    isLocked: false,
                  ),
                  buildMapCard(
                    context: context,
                    title: "Space",
                    stars: "★★☆",
                    imagePath: "assets/images/space.jpg",
                    bgColor: const Color(0xFF1E1E2F),
                    isLocked: false,
                  ),

                  const Spacer(),

                  /// Coming Soon Card
                  Container(
                    width: double.infinity,
                    height: 100,
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(12),
                      image: const DecorationImage(
                        image: AssetImage("assets/images/snowi.jpg"),
                        fit: BoxFit.cover,
                        opacity: 0.3,
                      ),
                    ),
                    child: const Center(
                      child: Text(
                        "More Maps\nComing Soon...",
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 20,
                          color: Colors.white,
                        ),
                      ),
                    ),
                  ),
                ],
              ),
            ),
          )
        ],
      ),
    );
  }
}
