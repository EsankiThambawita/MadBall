import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';

class UnityGameScreen extends StatefulWidget {
  final String sceneName;
  final String? difficulty;

  const UnityGameScreen({super.key, required this.sceneName, this.difficulty});

  @override
  State<UnityGameScreen> createState() => _UnityGameScreenState();
}

class _UnityGameScreenState extends State<UnityGameScreen> {
  UnityWidgetController? _controller;
  late UniqueKey _sceneKey;

  @override
  void initState() {
    super.initState();
    _sceneKey = UniqueKey(); // Ensures UnityWidget rebuilds
  }

  void _changeScene() async {
    _controller?.postMessage(
      'GameManager',
      'LoadSceneWithDifficulty',
      '${widget.difficulty}|${widget.sceneName}',
    );
  }

  void onUnityCreated(UnityWidgetController controller) {
    _controller = controller;
    Future.delayed(Duration(milliseconds: 500), _changeScene);
  }

  Future<void> _updatePlayerProgress(String map, String newDifficulty) async {
    final order = {'easy': 0, 'medium': 1, 'hard': 2};
    if (!order.containsKey(newDifficulty)) return;

    final user = FirebaseAuth.instance.currentUser;
    if (user == null) return;

    final email = user.email;
    final docRef = FirebaseFirestore.instance.collection('users').doc(email);
    final doc = await docRef.get();

    if (!doc.exists) {
      // If user doc doesn't exist, create it with this difficulty
      await docRef.set({map: newDifficulty});
      debugPrint("New user progress initialized: $map → $newDifficulty");
      return;
    }

    final data = doc.data();
    final current = data?[map] as String?;

    if (current == null || !order.containsKey(current)) {
      // First time progress or invalid string
      await docRef.update({map: newDifficulty});
      debugPrint("First progress set: $map → $newDifficulty");
      return;
    }

    if (order[newDifficulty]! > order[current]!) {
      await docRef.update({map: newDifficulty});
      debugPrint("Progress updated: $map → $newDifficulty");

      ScaffoldMessenger.of(context).showSnackBar(
        SnackBar(content: Text('Progress updated → $map: $newDifficulty')),
      );
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: UnityWidget(
        onUnityCreated: onUnityCreated,
        onUnityMessage: (dynamic message) {
          if (message == 'quit') {
            Navigator.of(context).pop();
            Navigator.of(context).pop();
            setState(() {
              _sceneKey = UniqueKey(); // Force full UnityWidget reset
            });
          }
          if (message == 'maps') {
            Navigator.of(context).pop();
            Navigator.of(context).pop();
            setState(() {
              _sceneKey = UniqueKey(); // Force full UnityWidget reset
            });
          } else if (message.toString().startsWith('win|')) {
            final parts = message.toString().split('|');
            if (parts.length == 3) {
              final map = parts[1]; // "space", "desert", "grassland"
              final difficulty = parts[2]; // "easy", "medium", "hard"
              _updatePlayerProgress(map, difficulty);
            }
          } else if (message.toString().startsWith('next|')) {
            final parts = message.toString().split('|');
            if (parts.length == 3) {
              final nextDifficulty = parts[1]; // "medium", "hard"
              final sceneName = parts[2]; // e.g., "space_1p"

              final map = sceneName.split('_')[0]; // get just "space"

              final nextScene = "$map\_1p"; // Keep same map, next difficulty

              _controller?.postMessage(
                'GameManager',
                'LoadSceneWithDifficulty',
                '$nextDifficulty|$nextScene',
              );
            }
          }
        },
        useAndroidViewSurface: true,
      ),
    );
  }
}
