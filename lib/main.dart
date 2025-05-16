import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';
import 'mapselection_camp.dart';
import 'mapselection_twoply.dart';
import 'settings.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized(); // Ensures that the Flutter bindings are initialized before running the app
  await Firebase.initializeApp(); // Initializes Firebase
  runApp(const MadBallApp());
}

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

class _HomeScreenState extends State<HomeScreen> with TickerProviderStateMixin {
  late AnimationController _cloudController;
  late AnimationController _bgController;
  late Animation<Offset> _cloudAnimation;
  late Animation<Offset> _bgAnimation;

  @override
  void initState() {
    super.initState();

    _cloudController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 6),
    )..repeat(reverse: true);

    _cloudAnimation = Tween<Offset>(
      begin: const Offset(-0.2, 0),
      end: const Offset(0.2, 0),
    ).animate(CurvedAnimation(
      parent: _cloudController,
      curve: Curves.easeInOut,
    ));

    _bgController = AnimationController(
      vsync: this,
      duration: const Duration(seconds: 20),
    )..repeat(reverse: true);

    // Increased range for visible movement
    _bgAnimation = Tween<Offset>(
      begin: const Offset(-0.05, 0),
      end: const Offset(0.05, 0),
    ).animate(CurvedAnimation(
      parent: _bgController,
      curve: Curves.easeInOut,
    ));
  }

  @override
  void dispose() {
    _cloudController.dispose();
    _bgController.dispose();
    super.dispose();
  }

  void navigateToPage(String page) {
    if (page == "settings") {
      showDialog(
        context: context,
        barrierColor: Colors.transparent,
        builder: (BuildContext context) {
          return Material(
            type: MaterialType.transparency,
            child: SettingsPopup(),
          );
        },
      );
    } else if (page == "achi") {
      
    }
  }

  void navigateToMapSelection(String mode) {
    final Widget targetPage = mode == "one-player"
        ? MapSelectionCamp(gameMode: mode)
        : MapSelectionTwoPly(gameMode: mode);

    Navigator.push(
      context,
      PageRouteBuilder(
        pageBuilder: (context, animation, secondaryAnimation) => targetPage,
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

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
         AnimatedBuilder(
          animation: _bgAnimation,
          builder: (context, child) {
            final dx = _bgAnimation.value.dx * MediaQuery.of(context).size.width;
            return Transform.translate(
              offset: Offset(dx, 0),
              child: Transform.scale(
                scale: 1.15,
                child: child,
              ),
            );
          },
          child: Image.asset(
            "assets/images/background.png",
            fit: BoxFit.cover,
            width: double.infinity,
            height: double.infinity,
          ),
        ),

          // Cloud Slide
          SlideTransition(
            position: _cloudAnimation,
            child: Align(
              alignment: const Alignment(0, -0.4),
              child: Image.asset(
                "assets/images/cloud.png",
                width: 220,
              ),
            ),
          ),

          // UI Content
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
                        child: const Icon(Icons.menu, size: 36, color: Colors.white),
                      ),
                      InkWell(
                        onTap: () => navigateToPage("achi"),
                        child: const CircleAvatar(
                          backgroundImage: AssetImage("assets/images/achievement_bg.png"),
                          radius: 28,
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
                            fontSize: 100,
                            color: Colors.black,
                          ),
                        ),
                        const SizedBox(height: 50),
                        GameButton(
                          text: "One player",
                          color: const Color(0xFFF1FF2D),
                          onTap: () => navigateToMapSelection("one-player"),
                        ),
                        const SizedBox(height: 24),
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
      elevation: 6,
      borderRadius: BorderRadius.circular(16),
      color: color,
      child: InkWell(
        onTap: onTap,
        borderRadius: BorderRadius.circular(16),
        child: Padding(
          padding: const EdgeInsets.symmetric(horizontal: 50, vertical: 20),
          child: Text(
            text,
            style: const TextStyle(
              fontFamily: 'Jaini',
              fontSize: 28,
              color: Colors.black,
            ),
          ),
        ),
      ),
    );
  }
}