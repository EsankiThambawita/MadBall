using UnityEngine;

public class SandStormController : MonoBehaviour
{
    [Header("Dust Particles")]
    public ParticleSystem dustParticles;

    [Header("Tumbleweed Settings")]
    public GameObject tumbleweedPrefab;
    public float spawnInterval = 3f;
    public float tumbleweedSpeed = 2f;
    public Vector2 spawnYRange = new Vector2(-3f, 3f);
    public Vector2 spawnX = new Vector2(-10f, -9f); // off-screen left

    private float timer;

    void Start()
    {
        if (dustParticles != null)
        {
            dustParticles.Play();
        }
    }

    void Update()
    {
        timer += Time.deltaTime;

        // Spawn tumbleweed at intervals
        if (timer >= spawnInterval)
        {
            SpawnTumbleweed();
            timer = 0f;
        }
    }

    void SpawnTumbleweed()
    {
        // Spawn position for tumbleweed (random Y position and off-screen X position)
        Vector3 spawnPos = new Vector3(Random.Range(spawnX.x, spawnX.y), Random.Range(spawnYRange.x, spawnYRange.y), 0f);

        // Instantiate tumbleweed prefab at the spawn position
        GameObject t = Instantiate(tumbleweedPrefab, spawnPos, Quaternion.identity);

        // Move tumbleweed to the right with a set speed
        Rigidbody2D rb = t.GetComponent<Rigidbody2D>();
        if (rb == null) rb = t.AddComponent<Rigidbody2D>();
        rb.gravityScale = 0;
        rb.linearVelocity = Vector2.right * tumbleweedSpeed;

        // Optional: Destroy tumbleweed after a certain time to avoid memory overload
        Destroy(t, 10f);
    }
}

public class Tumbleweed : MonoBehaviour
{
    public float tumbleweedForce = 1f; // Force applied to the ball
    private Rigidbody2D rb;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        // You can add movement logic here for the tumbleweed, if needed (like wind effect)
    }

    // When tumbleweed collides with the ball, affect the ball's movement
    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Check if it's the ball
        if (collision.gameObject.CompareTag("Ball"))
        {
            // Apply force to the ball to simulate interaction with tumbleweed
            Rigidbody2D ballRb = collision.gameObject.GetComponent<Rigidbody2D>();
            if (ballRb != null)
            {
                // Apply a random force to the ball to simulate interaction with tumbleweed
                Vector2 forceDirection = (ballRb.transform.position - transform.position).normalized;
                ballRb.AddForce(forceDirection * tumbleweedForce, ForceMode2D.Impulse);
            }
        }
    }
}
