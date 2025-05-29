import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:cloud_firestore/cloud_firestore.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase
      .initializeApp(); // Firebase must be initialized before using it
  runApp(MaterialApp(
    home: AchievementsPage(),
  ));
}

class AchievementsPage extends StatefulWidget {
  @override
  _AchievementsPageState createState() => _AchievementsPageState();
}

class _AchievementsPageState extends State<AchievementsPage> {
  Map<String, bool> _achievementStatus = {};
  bool _isLoading = true;

  @override
  void initState() {
    super.initState();
    loadAchievements();
  }

  Future<void> loadAchievements() async {
    final status = await fetchAchievementsStatus();
    setState(() {
      _achievementStatus = status;
      _isLoading = false;
    });
  }

  Future<Map<String, bool>> fetchAchievementsStatus() async {
    final user = FirebaseAuth.instance.currentUser;
    Map<String, bool> status = {
      'grassland_easy': false,
      'grassland_medium': false,
      'grassland_hard': false,
      'desert_easy': false,
      'desert_medium': false,
      'desert_hard': false,
      'space_easy': false,
      'space_medium': false,
      'space_hard': false,
    };

    if (user != null) {
      final email = user.email;
      final doc =
          await FirebaseFirestore.instance.collection('users').doc(email).get();

      if (doc.exists && doc.data() != null) {
        final data = doc.data()!;
        for (var map in ['grassland', 'desert', 'space']) {
          if (data[map] != null) {
            final levels = data[map] as Map<String, dynamic>;
            levels.forEach((level, completed) {
              status['${map}_${level}'] = completed == true;
            });
          }
        }
      }
    }

    return status;
  }

  String formatTitle(String key) {
    // grassland_easy => Grassland Easy
    return key
        .replaceAll('_', ' ')
        .split(' ')
        .map((e) => e[0].toUpperCase() + e.substring(1))
        .join(' ');
  }

  String formatDescription(String key) {
    return 'Defeat ${formatTitle(key)} opponent';
  }

  @override
  Widget build(BuildContext context) {
    if (_isLoading) {
      return Scaffold(
        body: Center(child: CircularProgressIndicator()),
      );
    }

    return Scaffold(
      backgroundColor: Color(0xFFEAF2EC),
      appBar: AppBar(
        backgroundColor: Colors.grey[400],
        title: Text('Achievements',
            style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold)),
        leading: IconButton(
          icon: Icon(Icons.arrow_back),
          onPressed: () => Navigator.pop(context),
        ),
      ),
      body: Padding(
        padding: const EdgeInsets.symmetric(horizontal: 16.0, vertical: 10),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            SectionTitle('Unlocked'),
            ..._achievementStatus.entries
                .where((entry) => entry.value == true)
                .map((entry) => AchievementCard(
                      title: formatTitle(entry.key),
                      description: formatDescription(entry.key),
                      backgroundColor: Colors.green[700],
                      imageAsset: 'assets/images/target.png',
                      isLocked: false,
                    )),
            SizedBox(height: 16),
            SectionTitle('Locked'),
            Expanded(
              child: ListView(
                children: _achievementStatus.entries
                    .where((entry) => entry.value == false)
                    .map((entry) => AchievementCard(
                          title: formatTitle(entry.key),
                          description: formatDescription(entry.key),
                          backgroundColor: Colors.grey[500],
                          imageAsset: 'assets/images/target.png',
                          isLocked: true,
                        ))
                    .toList(),
              ),
            ),
          ],
        ),
      ),
    );
  }
}

class SectionTitle extends StatelessWidget {
  final String title;
  const SectionTitle(this.title, {super.key});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 8),
      child: Text(
        title,
        style: TextStyle(fontWeight: FontWeight.bold, fontSize: 20),
      ),
    );
  }
}

class AchievementCard extends StatelessWidget {
  final String title;
  final String description;
  final Color? backgroundColor;
  final String imageAsset;
  final bool isLocked;

  const AchievementCard({
    super.key,
    required this.title,
    required this.description,
    required this.backgroundColor,
    required this.imageAsset,
    required this.isLocked,
  });

  @override
  Widget build(BuildContext context) {
    return Container(
      margin: const EdgeInsets.symmetric(vertical: 6),
      child: Stack(
        alignment: Alignment.center,
        children: [
          Container(
            decoration: BoxDecoration(
              borderRadius: BorderRadius.circular(12),
              image: DecorationImage(
                image: AssetImage('assets/images/Grassland.png'), // Background
                fit: BoxFit.cover,
              ),
            ),
            child: Opacity(
              opacity: isLocked ? 0.6 : 0.8,
              child: ListTile(
                leading: Image.asset(imageAsset, width: 60),
                title: Text(
                  title,
                  style: TextStyle(
                    fontWeight: FontWeight.bold,
                    color:
                        isLocked ? Colors.white.withOpacity(0.6) : Colors.white,
                  ),
                ),
                subtitle: Text(
                  description,
                  style: TextStyle(
                    color: isLocked
                        ? Colors.white.withOpacity(0.6)
                        : Colors.white70,
                  ),
                ),
              ),
            ),
          ),
          if (isLocked)
            Container(
              width: double.infinity,
              height: 70,
              decoration: BoxDecoration(
                color: Colors.black.withOpacity(0.3),
                borderRadius: BorderRadius.circular(12),
              ),
              child: Center(
                child: Icon(Icons.lock, size: 32, color: Colors.white),
              ),
            ),
        ],
      ),
    );
  }
}
