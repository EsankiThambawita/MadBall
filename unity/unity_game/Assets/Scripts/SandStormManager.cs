using UnityEngine;

public class SandStormController : MonoBehaviour
{
    [Header("Dust and Tumbleweed Settings")]
    public ParticleSystem dustParticles;
    public GameObject tumbleweedPrefab;
    public float spawnInterval = 10f;
    public float tumbleweedSpeed = 1f;
    public int tumbleweedCount = 2;
    public Vector2 spawnYRange = new Vector2(-4f, 3f);
    public Vector2 spawnX = new Vector2(-10f, -9f);

    [Header("Audio")]
    public AudioSource sandstormAudio;

    private float timer;

    void Update()
    {
        timer += Time.deltaTime;

        if (timer >= spawnInterval)
        {
            StartSandstormWave();
            timer = 0f;
        }
    }

    void StartSandstormWave()
    {
        // Play the dust particles
        if (dustParticles != null)
        {
            dustParticles.Play();
        }

        // Spawn multiple tumbleweeds with slight spacing
        for (int i = 0; i < tumbleweedCount; i++)
        {
            SpawnTumbleweed(i * 0.5f); // Delay each one slightly
        }

        // Play sound
        if (sandstormAudio != null && !sandstormAudio.isPlaying)
        {
            sandstormAudio.Play();
        }

        // Spawn multiple tumbleweeds with slight spacing
        for (int i = 0; i < tumbleweedCount; i++)
        {
            SpawnTumbleweed(i * 0.5f); // Delay each one slightly
        }
    }

    void SpawnTumbleweed(float xOffset)
    {
        Vector3 spawnPos = new Vector3(Random.Range(spawnX.x, spawnX.y) - xOffset, Random.Range(spawnYRange.x, spawnYRange.y), 0f);
        GameObject t = Instantiate(tumbleweedPrefab, spawnPos, Quaternion.identity);

        Rigidbody2D rb = t.GetComponent<Rigidbody2D>();
        if (rb == null) rb = t.AddComponent<Rigidbody2D>();
        rb.gravityScale = 0;
        rb.linearVelocity = Vector2.right * tumbleweedSpeed;

        Destroy(t, 10f);
    }
}
