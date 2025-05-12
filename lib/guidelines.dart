import 'dart:ui';
import 'package:flutter/material.dart';

class GuidelinesPopup extends StatefulWidget {
  const GuidelinesPopup({super.key});

  @override
  State<GuidelinesPopup> createState() => _GuidelinesPopupState();
}

class _GuidelinesPopupState extends State<GuidelinesPopup> {
  final PageController _pageController = PageController();
  int _currentPage = 0;

  final List<_GuidelinePage> _pages = const [
    _GuidelinePage(
      imagePath: 'assets/images/guideline_step1.png',
      description:
          "Don’t let the ball go past you\nand defend it by moving your\nslider.",
    ),
    _GuidelinePage(
      imagePath: 'assets/images/guideline_step2.png',
      description:
          "Different Maps with have different\nchallenges. Do your best to evade\nthem and use them to your\nadvantage",
    ),
    _GuidelinePage(
      imagePath: 'assets/images/guideline_step3.png',
      description:
          "Outlast your opponent!\nBe the first to score 3 points to\nwin. Good luck!",
    ),
  ];

  @override
  Widget build(BuildContext context) {
    return Dialog(
      backgroundColor: const Color.fromARGB(0, 100, 100, 100),
      insetPadding: const EdgeInsets.symmetric(horizontal: 12, vertical: 24),
      child: Stack(
        children: [
          // Background blur and shadow layer
          ClipRRect(
            borderRadius: BorderRadius.circular(24),
            child: BackdropFilter(
              filter: ImageFilter.blur(sigmaX: 10, sigmaY: 10),
              child: Container(
                decoration: BoxDecoration(
                  color:
                      const Color.fromARGB(255, 213, 243, 255).withOpacity(0.7),
                  borderRadius: BorderRadius.circular(24),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.black.withOpacity(0.25),
                      blurRadius: 10,
                      offset: const Offset(0, 4),
                    ),
                  ],
                ),
                padding: const EdgeInsets.all(24),
                child: SizedBox(
                  height: MediaQuery.of(context).size.height * 0.75,
                  width: MediaQuery.of(context).size.width * 0.85,
                  child: Column(
                    children: [
                      const Text(
                        'Guidelines',
                        style: TextStyle(
                          fontFamily: 'Jaini',
                          fontSize: 36,
                          color: Colors.black,
                          shadows: [
                            Shadow(
                              offset: Offset(2, 2),
                              blurRadius: 4,
                              color: Colors.grey,
                            ),
                          ],
                        ),
                      ),
                      const SizedBox(height: 30),
                      Expanded(
                        child: PageView.builder(
                          controller: _pageController,
                          onPageChanged: (index) =>
                              setState(() => _currentPage = index),
                          itemCount: _pages.length,
                          itemBuilder: (context, index) => _pages[index],
                        ),
                      ),
                      const SizedBox(height: 20),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: List.generate(
                          _pages.length,
                          (index) => Container(
                            margin: const EdgeInsets.symmetric(horizontal: 6),
                            width: 12,
                            height: 12,
                            decoration: BoxDecoration(
                              shape: BoxShape.circle,
                              color: _currentPage == index
                                  ? const Color.fromARGB(255, 255, 255, 255)
                                  : const Color.fromARGB(255, 124, 124, 124),
                            ),
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
            ),
          ),
          // Close icon
          Positioned(
            top: 40,
            right: 20,
            child: GestureDetector(
              onTap: () => Navigator.of(context).pop(),
              child: const Icon(
                Icons.close_outlined,
                color: Color.fromARGB(255, 255, 255, 255),
                size: 28,
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class _GuidelinePage extends StatelessWidget {
  final String imagePath;
  final String description;

  const _GuidelinePage({
    required this.imagePath,
    required this.description,
  });

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Image.asset(
          imagePath,
          height: 200,
          fit: BoxFit.contain,
        ),
        const SizedBox(height: 74),
        Container(
          width: double.infinity, // Ensures full width
          padding: const EdgeInsets.symmetric(vertical: 30, horizontal: 30),
          decoration: BoxDecoration(
            color: const Color(0xFF97C5D7),
            borderRadius: BorderRadius.circular(18),
          ),
          child: Text(
            description,
            textAlign: TextAlign.center,
            style: const TextStyle(
              fontFamily: 'Jaini',
              fontSize: 22,
              color: Colors.white,
              height: 1.5,
              shadows: [
                Shadow(
                  offset: Offset(1.5, 1.5),
                  blurRadius: 3,
                  color: Colors.black54,
                ),
              ],
            ),
          ),
        ),
      ],
    );
  }
}
