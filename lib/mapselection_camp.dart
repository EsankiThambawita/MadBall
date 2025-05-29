import 'package:flutter/material.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'guidelines.dart';

// Info page imports
import 'desert_info.dart' as desert;
import 'grass_info.dart' as grass;
import 'space_info.dart' as space;

class MapSelectionCamp extends StatefulWidget {
  final String gameMode;

  const MapSelectionCamp({super.key, required this.gameMode});

  @override
  State<MapSelectionCamp> createState() => _MapSelectionCampState();
}

class _MapSelectionCampState extends State<MapSelectionCamp> {
  void _navigateToInfo(BuildContext context, String mapName) async {
    Widget page;
    switch (mapName) {
      case 'Grass Plains':
        page = const grass.GrassInfoPage();
        break;
      case 'Desert':
        page = const desert.DesertInfoPage();
        break;
      case 'Space':
        page = const space.SpaceInfoPage();
        break;
      default:
        page = Scaffold(
          appBar: AppBar(title: const Text('Unknown')),
          body: Center(child: Text('No info available for $mapName')),
        );
    }

    await Navigator.push(
      context,
      PageRouteBuilder(
        pageBuilder: (context, animation, secondaryAnimation) => page,
        transitionsBuilder: (context, animation, secondaryAnimation, child) {
          const begin = Offset(0.0, 1.0);
          const end = Offset.zero;
          const curve = Curves.easeInOut;
          var tween =
              Tween(begin: begin, end: end).chain(CurveTween(curve: curve));
          var offsetAnimation = animation.drive(tween);
          return SlideTransition(position: offsetAnimation, child: child);
        },
      ),
    );

    setState(() {}); // Rebuild to refresh stars
  }

  int _getStarCount(String difficulty) {
    switch (difficulty.trim().toLowerCase()) {
      case 'easy':
        return 1;
      case 'medium':
        return 2;
      case 'hard':
        return 3;
      default:
        debugPrint('Unknown difficulty level: $difficulty');
        return 0;
    }
  }

  String _getMapKey(String title) {
    switch (title.toLowerCase()) {
      case 'grass plains':
        return 'grassland';
      case 'desert':
        return 'desert';
      case 'space':
        return 'space';
      default:
        return '';
    }
  }

  Widget buildMapCard({
    required BuildContext context,
    required String title,
    required String imagePath,
    required Color bgColor,
    required bool isLocked,
  }) {
    final currentUser = FirebaseAuth.instance.currentUser;
    final mapKey = _getMapKey(title);

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
                const SizedBox(height: 8),
                currentUser == null
                    ? _buildStaticStars(0)
                    : FutureBuilder<DocumentSnapshot>(
                        future: FirebaseFirestore.instance
                            .collection('users')
                            .doc(currentUser.email!.toLowerCase())
                            .get(),
                        builder: (context, snapshot) {
                          if (snapshot.connectionState ==
                              ConnectionState.waiting) {
                            return const CircularProgressIndicator(
                                color: Colors.white);
                          }

                          if (snapshot.hasError ||
                              !snapshot.hasData ||
                              !snapshot.data!.exists) {
                            return _buildStaticStars(0);
                          }

                          final docData = snapshot.data?.data();
                          final data =
                              docData is Map<String, dynamic> ? docData : {};
                          final difficulty = data[mapKey]?.toString() ?? '';
                          final starCount = _getStarCount(difficulty);

                          return Row(
                            children: List.generate(
                              3,
                              (index) => Icon(
                                Icons.star,
                                color: index < starCount
                                    ? Colors.amber
                                    : Colors.white,
                              ),
                            ),
                          );
                        },
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

  Widget _buildStaticStars(int starCount) {
    return Row(
      children: List.generate(
        3,
        (index) => Icon(
          Icons.star,
          color: index < starCount ? Colors.amber : Colors.white,
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    final currentUser = FirebaseAuth.instance.currentUser;

    return Scaffold(
      extendBodyBehindAppBar: true,
      appBar: AppBar(
        backgroundColor: Colors.transparent,
        elevation: 0,
        leading: IconButton(
          icon: const Icon(Icons.arrow_back, color: Colors.black),
          onPressed: () => Navigator.pop(context),
        ),
        title: Text(
          currentUser == null
              ? "Maps: One Player (Offline)"
              : "Maps: One Player",
          style: const TextStyle(
            fontFamily: 'Jaini',
            fontSize: 24,
            color: Colors.black,
          ),
        ),
        centerTitle: true,
        actions: [
          Padding(
            padding: const EdgeInsets.only(right: 12),
            child: GestureDetector(
              onTap: () {
                showDialog(
                  context: context,
                  builder: (context) => const GuidelinesPopup(),
                );
              },
              child: Image.asset(
                'assets/images/guidelines_icon.png',
                height: 36,
                width: 36,
              ),
            ),
          ),
        ],
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
                  onPressed: () => Navigator.pop(context),
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }
}
