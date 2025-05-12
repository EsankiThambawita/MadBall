using UnityEngine;

public class AsteroidRainManager : MonoBehaviour
{
    public GameObject asteroidPrefab;
    public float spawnInterval = 20f;
    public float asteroidSpeed = 1f;
    public int asteroidsPerSpawn = 5;

    private float timer;

    void Update()
    {
        timer += Time.deltaTime;

        if (timer >= spawnInterval)
        {
            SpawnAsteroids();
            timer = 0f;
        }
    }

    void SpawnAsteroids()
    {
        for (int i = 0; i < asteroidsPerSpawn; i++)
        {
            // Random spawn position for the asteroids
            Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(5f, 7f));
            GameObject asteroid = Instantiate(asteroidPrefab, spawnPos, Quaternion.identity);

            // Get the Rigidbody2D component
            Rigidbody2D rb = asteroid.GetComponent<Rigidbody2D>();
            if (rb != null)
            {
                // Set Rigidbody2D to Kinematic so it isn't affected by physics unless collided with
                rb.bodyType = RigidbodyType2D.Kinematic;
                rb.linearVelocity = Vector2.down * asteroidSpeed;
                rb.gravityScale = 0f; // Disable gravity
            }
        }
    }
}
