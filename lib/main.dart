import 'package:flutter/material.dart';
import 'mapselection_camp.dart';
import 'mapselection_twoply.dart';
import 'settings.dart';

void main() => runApp(const MadBallApp());

class MadBallApp extends StatelessWidget {
  const MadBallApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      initialRoute: '/',
      routes: {
        '/': (context) => const HomeScreen(),
        '/one-player': (context) => MapSelectionCamp(gameMode: "one-player"),
        '/two-player': (context) => MapSelectionTwoPly(gameMode: "Two Player"),
      },
      debugShowCheckedModeBanner: false,
    );
  }
}

class HomeScreen extends StatefulWidget {
  const HomeScreen({super.key});

  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen>
    with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late Animation<Offset> _cloudAnimation;

  @override
  void initState() {
    super.initState();
    _controller =
        AnimationController(vsync: this, duration: const Duration(seconds: 6))
          ..repeat(reverse: true);
    _cloudAnimation = Tween<Offset>(
            begin: const Offset(-0.2, 0), end: const Offset(0.2, 0))
        .animate(CurvedAnimation(parent: _controller, curve: Curves.easeInOut));
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  // Method to navigate to a new page (can be modified as needed)
  void navigateToPage(String page) {
    if (page == "settings") {
      showDialog(
        context: context,
        builder: (BuildContext context) {
          return Dialog(
            backgroundColor: Colors.transparent,
            child: SettingsPopup(),
          );
        },
      );
    } else if (page == "achi") {
      // Navigate to the 'Achi' related page
      Navigator.push(
        context,
        MaterialPageRoute(
            builder: (context) =>
                const AchiPage()), // Replace with your Achi page
      );
    }
  }

  // Method for navigating to map selection
  void navigateToMapSelection(String mode) {
    if (mode == "one-player") {
      Navigator.push(
        context,
        PageRouteBuilder(
          pageBuilder: (context, animation, secondaryAnimation) =>
              MapSelectionCamp(gameMode: mode),
          transitionsBuilder: (context, animation, secondaryAnimation, child) {
            const begin = Offset(0.0, 1.0); // Slide from bottom
            const end = Offset.zero;
            const curve = Curves.easeInOut;

            var tween =
                Tween(begin: begin, end: end).chain(CurveTween(curve: curve));
            var offsetAnimation = animation.drive(tween);

            return SlideTransition(position: offsetAnimation, child: child);
          },
        ),
      );
    } else if (mode == "Two Player") {
      Navigator.push(
        context,
        PageRouteBuilder(
          pageBuilder: (context, animation, secondaryAnimation) =>
              MapSelectionTwoPly(gameMode: mode),
          transitionsBuilder: (context, animation, secondaryAnimation, child) {
            const begin = Offset(0.0, 1.0); // Slide from bottom
            const end = Offset.zero;
            const curve = Curves.easeInOut;

            var tween =
                Tween(begin: begin, end: end).chain(CurveTween(curve: curve));
            var offsetAnimation = animation.drive(tween);

            return SlideTransition(position: offsetAnimation, child: child);
          },
        ),
      );
    }
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
                    children: [
                      InkWell(
                        onTap: () => navigateToPage("settings"),
                        child: const Icon(Icons.menu, size: 28, color: Colors.white),
                      ),
                      InkWell(
                        onTap: () => navigateToPage("achi"),
                        child: const CircleAvatar(
                          backgroundImage: AssetImage("assets/images/achi.png"),
                          radius: 20,
                        ),
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
                          text: "One player",
                          color: const Color(0xFFF1FF2D),
                          onTap: () => navigateToMapSelection("one-player"),
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

// Placeholder MenuPage
class MenuPage extends StatelessWidget {
  const MenuPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text("Menu")),
      body: const Center(child: Text("This is the Menu Page")),
    );
  }
}

// Placeholder AchiPage
class AchiPage extends StatelessWidget {
  const AchiPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text("Achi Page")),
      body: const Center(child: Text("This is the Achi Page")),
    );
  }
}
