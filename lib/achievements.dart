import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: AchievementsPage(),
  ));
}

class AchievementsPage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
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
            AchievementCard(
              title: 'Beginner Apprentice',
              description: 'Defeat Easy Grassland opponent',
              backgroundColor: Colors.green[700],
              imageAsset: 'assets/images/target.png',
              isLocked: false,
            ),
            AchievementCard(
              title: 'Intermediate Apprentice',
              description: 'Defeat Normal Grassland opponent',
              backgroundColor: Colors.green[700],
              imageAsset: 'assets/images/target.png',
              isLocked: false,
            ),
            AchievementCard(
              title: 'Beginner Wanderer',
              description: 'Defeat Easy Desert opponent',
              backgroundColor: Colors.brown[300],
              imageAsset: 'assets/images/target.png',
              isLocked: false,
            ),
            SizedBox(height: 16),
            SectionTitle('Locked'),
            Expanded(
              child: ListView.builder(
                itemCount: 5,
                itemBuilder: (context, index) => AchievementCard(
                  title: 'Advanced Apprentice',
                  description: 'Defeat Easy Grassland opponent',
                  backgroundColor: Colors.green[200],
                  imageAsset: 'assets/images/target.png',
                  isLocked: true,
                ),
              ),
            )
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
                image: AssetImage('assets/images/Grassland.png'), // BG image
                fit: BoxFit.cover,
              ),
            ),
            child: Opacity(
              opacity: isLocked ? 0.6 : 0.7, // Faded overlay for locked cards
              child: ListTile(
                leading: Image.asset(imageAsset, width: 60), // Increased size
                title: Text(
                  title,
                  style: TextStyle(
                    fontWeight: FontWeight.bold,
                    color: isLocked
                        ? Colors.white.withOpacity(0.6)
                        : Colors.white, // Faded white for locked
                  ),
                ),
                subtitle: Text(
                  description,
                  style: TextStyle(
                    color: isLocked
                        ? Colors.white.withOpacity(0.6)
                        : Colors.white70, // Faded white for locked
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
