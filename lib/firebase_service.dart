import 'package:cloud_firestore/cloud_firestore.dart';
import 'user_model.dart';

class FirebaseService {
  final FirebaseFirestore _firestore = FirebaseFirestore.instance;

  Future<void> saveUserProgress(UserProgress progress) async {
    final userDoc = _firestore.collection('users').doc(progress.email);
    await userDoc.set(progress.toMap(), SetOptions(merge: true));
  }

  Future<UserProgress?> getUserProgress(String email) async {
    final doc = await _firestore.collection('users').doc(email).get();
    if (doc.exists) {
      return UserProgress.fromMap(doc.data()!);
    }
    return null;
  }
}
