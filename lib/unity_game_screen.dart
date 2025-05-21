import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityGameScreen extends StatefulWidget {
  final String sceneName; // Accept scene name as parameter

  const UnityGameScreen({super.key, required this.sceneName});

  @override
  State<UnityGameScreen> createState() => _UnityGameScreenState();
}


class _UnityGameScreenState extends State<UnityGameScreen> {
  UnityWidgetController? _controller;

  void onUnityCreated(UnityWidgetController controller) {
    _controller = controller;

    // Load the specified scene
    _controller!.postMessage('GameManager', 'LoadScene', widget.sceneName);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: UnityWidget(
        onUnityCreated: onUnityCreated,
        useAndroidViewSurface: true,
      ),
    );
  }
}

