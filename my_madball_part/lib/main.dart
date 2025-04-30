import 'package:flutter/material.dart';
import 'MapSelectionPage.dart'; // <-- Import the other page here

void main() => runApp(const MadBallApp());

class MadBallApp extends StatelessWidget {
  const MadBallApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: const HomeScreen(),
      debugShowCheckedModeBanner: false,
    );
  }
}

class HomeScreen extends StatefulWidget {
  const HomeScreen({super.key});

  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late Animation<Offset> _cloudAnimation;

  @override
  void initState() {
    super.initState();
    _controller =
        AnimationController(vsync: this, duration: const Duration(seconds: 6))
          ..repeat(reverse: true);
    _cloudAnimation = Tween<Offset>(
      begin: const Offset(-0.2, 0),
      end: const Offset(0.2, 0),
    ).animate(CurvedAnimation(parent: _controller, curve: Curves.easeInOut));
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  void navigateToMapSelection(String mode) {
    Navigator.push(
      context,
      MaterialPageRoute(
        builder: (context) => MapSelectionPage(gameMode: mode),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          Positioned.fill(
            child: Image.asset(
              "assets/images/background.png",
              fit: BoxFit.cover,
            ),
          ),
          SlideTransition(
            position: _cloudAnimation,
            child: Align(
              alignment: const Alignment(0, -0.4),
              child: Image.asset(
                "assets/images/cloud.png",
                width: 200,
              ),
            ),
          ),
          SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
              child: Column(
                children: [
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: const [
                      Icon(Icons.menu, size: 28, color: Colors.white),
                      CircleAvatar(
                        backgroundImage: AssetImage("assets/images/profile.png"),
                        radius: 20,
                      ),
                    ],
                  ),
                  const Spacer(),
                  Center(
                    child: Column(
                      children: [
                        const Text(
                          "MAD\nBALL",
                          textAlign: TextAlign.center,
                          style: TextStyle(
                            fontFamily: 'Jaini',
                            fontSize: 70,
                            color: Colors.black,
                          ),
                        ),
                        const SizedBox(height: 40),
                        GameButton(
                          text: "Campaign",
                          color: const Color(0xFFF1FF2D),
                          onTap: () => navigateToMapSelection("Campaign"),
                        ),
                        const SizedBox(height: 20),
                        GameButton(
                          text: "Two Player",
                          color: const Color(0xFF4BE843),
                          onTap: () => navigateToMapSelection("Two Player"),
                        ),
                      ],
                    ),
                  ),
                  const Spacer(),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class GameButton extends StatelessWidget {
  final String text;
  final Color color;
  final VoidCallback onTap;

  const GameButton({
    super.key,
    required this.text,
    required this.color,
    required this.onTap,
  });

  @override
  Widget build(BuildContext context) {
    return Material(
      elevation: 4,
      borderRadius: BorderRadius.circular(12),
      color: color,
      child: InkWell(
        onTap: onTap,
        borderRadius: BorderRadius.circular(12),
        child: Padding(
          padding: const EdgeInsets.symmetric(horizontal: 40, vertical: 16),
          child: Text(
            text,
            style: const TextStyle(
              fontFamily: 'Jaini',
              fontSize: 24,
              color: Colors.black,
            ),
          ),
        ),
      ),
    );
  }
}
