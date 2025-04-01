using System.Collections;
using UnityEngine;

public class WindManager : MonoBehaviour
{
    public ParticleSystem leafParticles; // Assign the LeafParticles in Inspector
    public BallMovement ball; // Reference to BallMovement script

    public float minWindInterval = 5f; // Minimum time between winds
    public float maxWindInterval = 15f; // Maximum time between winds
    public float minWindDuration = 3f; // Minimum wind duration
    public float maxWindDuration = 8f; // Maximum wind duration

    private bool isWindActive = false;
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
        isWindActive = true;
        
        // Random wind strength (mild to strong)
        currentWindStrength = Random.Range(0.5f, 2.5f);

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
        isWindActive = false;
        leafParticles.Stop();
        ball.ApplyWind(Vector2.zero, 0); // Remove wind effect
    }
}
