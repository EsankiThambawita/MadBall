using System.Collections;
using UnityEngine;

public class WindManager : MonoBehaviour
{
    public ParticleSystem leafParticles; // Assign the LeafParticles in Inspector
    public BallMovement ball; // Reference to BallMovement script

    [SerializeField] private float minWindInterval = 3f;
    [SerializeField] private float maxWindInterval = 8f;
    [SerializeField] private float minWindDuration = 5f;
    [SerializeField] private float maxWindDuration = 7f;

    private Vector2 currentWindDirection;
    private float currentWindStrength;

    void Start()
    {
        // Disable particles initially
        leafParticles.Stop();
        StartCoroutine(WindEffectLoop());
    }

    IEnumerator WindEffectLoop()
    {
        while (true)
        {
            // Wait for a random interval before starting wind
            float windInterval = Random.Range(minWindInterval, maxWindInterval);
            yield return new WaitForSeconds(windInterval);

            GenerateWind(); // Create procedural wind

            float windDuration = Random.Range(minWindDuration, maxWindDuration);
            yield return new WaitForSeconds(windDuration);

            StopWind();
        }
    }

    void GenerateWind()
    {
        // Random wind strength (mild to strong)
        currentWindStrength = Random.Range(1.5f, 5f);

        // Random wind direction (left/right/up/down)
        float angle = Random.Range(0f, 360f);
        currentWindDirection = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle)).normalized;

        // Start the leaf particle system
        var main = leafParticles.main;
        main.startSpeed = currentWindStrength * 2f; // Scale particle speed with wind strength
        leafParticles.transform.rotation = Quaternion.Euler(0, 0, angle - 90); // Rotate to match wind direction
        leafParticles.Play();

        // Apply wind effect to ball
        ball.ApplyWind(currentWindDirection, currentWindStrength);
    }

    void StopWind()
    {
        leafParticles.Stop();
        ball.ApplyWind(Vector2.zero, 0); // Remove wind effect
    }
}
