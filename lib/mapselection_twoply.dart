import 'package:flutter/material.dart';
import 'grass_info2.dart' as grass;
import 'desert_info2.dart' as desert;
import 'space_info2.dart' as space;
import 'guidelines.dart';

class MapSelectionTwoPly extends StatelessWidget {
  final String gameMode;

  const MapSelectionTwoPly({super.key, required this.gameMode});

  void _navigateToInfo(BuildContext context, String mapName) {
    Widget page;
    switch (mapName) {
      case 'Grass Plains':
        page = const grass.GrassInfoPage2();
        break;
      case 'Desert':
        page = const desert.DesertInfoPage2();
        break;
      case 'Space':
        page = const space.SpaceInfoPage2();
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
    required String imagePath,
    required Color bgColor,
    required bool isLocked,
  }) {
    return Container(
      margin: const EdgeInsets.symmetric(vertical: 10),
      padding: const EdgeInsets.symmetric(horizontal: 16),
      height: 120,
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
              ],
            ),
          ),
          IconButton(
            icon: const Icon(Icons.play_arrow, color: Colors.white, size: 75),
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
      appBar: PreferredSize(
        preferredSize: const Size.fromHeight(80),
        child: SafeArea(
          child: Padding(
            padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 10),
            child: Stack(
              alignment: Alignment.center,
              children: [
                Align(
                  alignment: Alignment.centerLeft,
                  child: IconButton(
                    icon: const Icon(Icons.arrow_back, color: Colors.black),
                    onPressed: () => Navigator.pop(context),
                  ),
                ),
                Center(
                  child: Text(
                    "Maps: ${gameMode[0].toUpperCase()}${gameMode.substring(1)}",
                    style: const TextStyle(
                      fontFamily: 'Jaini',
                      fontSize: 24,
                      color: Colors.black,
                    ),
                  ),
                ),
                Align(
                  alignment: Alignment.centerRight,
                  child: IconButton(
                    icon: Image.asset(
                      'assets/images/guidelines_icon.png',
                      width: 36,
                      height: 36,
                    ),
                    onPressed: () {
                      showDialog(
                        context: context,
                        builder: (context) => const GuidelinesPopup(),
                      );
                    },
                  ),
                ),
              ],
            ),
          ),
        ),
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
          Padding(
            padding: const EdgeInsets.only(top: 90, left: 16, right: 16),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const SizedBox(height: 20), // <-- added spacing here
                buildMapCard(
                  context: context,
                  title: "Grass Plains",
                  imagePath: "assets/images/grass.png",
                  bgColor: const Color(0xFF68B729),
                  isLocked: false,
                ),
                buildMapCard(
                  context: context,
                  title: "Desert",
                  imagePath: "assets/images/dessert.png",
                  bgColor: const Color(0xFFEED9B6),
                  isLocked: false,
                ),
                buildMapCard(
                  context: context,
                  title: "Space",
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
          Positioned(
            bottom: 20,
            left: MediaQuery.of(context).size.width / 2 - 30,
            child: Container(
              decoration: BoxDecoration(
                color: Colors.white,
                shape: BoxShape.circle,
                boxShadow: [
                  BoxShadow(
                    color: Colors.black.withOpacity(0.2),
                    blurRadius: 8,
                    offset: const Offset(0, 4),
                  ),
                ],
              ),
              child: IconButton(
                icon: const Icon(Icons.close, color: Colors.black),
                onPressed: () => Navigator.pop(context),
              ),
            ),
          ),
        ],
      ),
    );
  }
}
