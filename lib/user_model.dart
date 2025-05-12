class UserProgress {
  final String email;
  final String grassland;
  final String space;
  final String desert;

  UserProgress({
    required this.email,
    required this.grassland,
    required this.space,
    required this.desert,
  });

  factory UserProgress.fromMap(Map<String, dynamic> data) {
    return UserProgress(
      email: data['email'] ?? '',
      grassland: data['grassland'] ?? '',
      space: data['space'] ?? '',
      desert: data['desert'] ?? '',
    );
  }

  Map<String, dynamic> toMap() {
    return {
      'email': email,
      'grassland': grassland,
      'space': space,
      'desert': desert,
    };
  }
}
