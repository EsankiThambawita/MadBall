import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityGameScreen extends StatefulWidget {
  final String sceneName;

  const UnityGameScreen({super.key, required this.sceneName});

  @override
  State<UnityGameScreen> createState() => _UnityGameScreenState();
}

class _UnityGameScreenState extends State<UnityGameScreen> {
  UnityWidgetController? _controller;

  void _changeScene() async {
    await Future.delayed(const Duration(milliseconds: 300));
    _controller?.postMessage('GameManager', 'LoadScene', widget.sceneName);
  }

  void onUnityCreated(UnityWidgetController controller) {
    _controller = controller;
    Future.delayed(Duration(milliseconds: 500), _changeScene);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: UnityWidget(
        onUnityCreated: onUnityCreated,
        onUnityMessage: (dynamic message) {
          if (message == 'quit') {
            Navigator.of(context).pop();
          }
          if (message == 'maps') {
            Navigator.of(context).pop();
            Navigator.of(context).pop();
          }
        },
        useAndroidViewSurface: true,
      ),
    );
  }
}
