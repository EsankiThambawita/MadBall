import 'package:flutter/material.dart';
import 'desert_info.dart' as desert;
import 'grass_info.dart' as grass;
import 'space_info.dart'; // Correctly import the SpaceInfoPage

class MapSelectionCamp extends StatelessWidget {
  final String gameMode;

  const MapSelectionCamp({super.key, required this.gameMode});

  void _navigateToInfo(BuildContext context, String mapName) {
    Widget page;
    switch (mapName) {
      case 'Grass Plains':
        page = const grass.GrassInfoPage();
        break;
      case 'Desert':
        page = const desert.DesertInfoPage();
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
      PageRouteBuilder(
        pageBuilder: (context, animation, secondaryAnimation) => page,
        transitionsBuilder: (context, animation, secondaryAnimation, child) {
          const begin = Offset(0.0, 1.0);
          const end = Offset.zero;
          const curve = Curves.easeInOut;

          var tween = Tween(begin: begin, end: end).chain(CurveTween(curve: curve));
          var offsetAnimation = animation.drive(tween);

          return SlideTransition(position: offsetAnimation, child: child);
        },
      ),
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
      height: 140,
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
                    ),
                  ],
                ),
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
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        backgroundColor: Colors.transparent,
        elevation: 0,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back, color: Colors.black),
          onPressed: () {
            Navigator.pop(context); // Use this to go back to the previous screen
          },
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
      body: Stack(
        children: [
          Positioned.fill(
            child: Opacity(
              opacity: 0.3,
              child: Image.asset(
                "assets/images/mapbackground.jpg",
                fit: BoxFit.cover,
              ),
            ),
          ),
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
                  const SizedBox(height: 30),
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
          ),
          Align(
            alignment: Alignment.bottomCenter,
            child: Padding(
              padding: const EdgeInsets.only(bottom: 20),
              child: Container(
                decoration: const BoxDecoration(
                  color: Colors.white,
                  shape: BoxShape.circle,
                ),
                child: IconButton(
                  icon: const Icon(Icons.close, color: Colors.black, size: 30),
                  onPressed: () {
                    Navigator.pop(context); // Cancel the action and return to previous screen
                  },
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }
}
