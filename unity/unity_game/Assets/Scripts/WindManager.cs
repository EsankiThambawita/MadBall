using System.Collections;
using UnityEngine;

public class WindManager : MonoBehaviour
{
    public ParticleSystem leafParticles; // Assign the LeafParticles in Inspector
    public BallMovement ball; // Reference to BallMovement script

    public AudioSource windAudio;
    public AudioSource bgmAudio;

    [SerializeField] private float minWindInterval = 3f;
    [SerializeField] private float maxWindInterval = 8f;
    [SerializeField] private float minWindDuration = 5f;
    [SerializeField] private float maxWindDuration = 7f;

    [SerializeField] private float startMinStrength = 1.5f;
    [SerializeField] private float startMaxStrength = 5f;
    [SerializeField] private float strengthIncreaseRate = 0.25f;
    [SerializeField] private float maxCapStrength = 10f;

    [SerializeField] private float bgmVolumeNormal = 0.4f;    // Normal BG music volume
    [SerializeField] private float bgmVolumeDucked = 0.01f;    // Lowered volume during wind
    [SerializeField] private float fadeSpeed = 0.8f;          // How fast volume fades in/out
    private bool isWindActive = false;

    private Vector2 currentWindDirection;
    private float currentWindStrength;
    private float currentMinStrength;
    private float currentMaxStrength;

    void Start()
    {
        leafParticles.Stop();
        currentMinStrength = startMinStrength;
        currentMaxStrength = startMaxStrength;

        // Set initial BGM volume
        if (bgmAudio != null)
            bgmAudio.volume = bgmVolumeNormal;

        StartCoroutine(WindEffectLoop());
    }

    void Update()
    {
        if (bgmAudio == null)
            return;

        if (isWindActive)
        {
            // Fade bgm volume down smoothly
            bgmAudio.volume = Mathf.MoveTowards(bgmAudio.volume, bgmVolumeDucked, fadeSpeed * Time.deltaTime);
        }
        else
        {
            // Fade bgm volume back up smoothly
            bgmAudio.volume = Mathf.MoveTowards(bgmAudio.volume, bgmVolumeNormal, fadeSpeed * Time.deltaTime);
        }
    }

    IEnumerator WindEffectLoop()
    {
        while (true)
        {
            float windInterval = Random.Range(minWindInterval, maxWindInterval);
            yield return new WaitForSeconds(windInterval);

            GenerateWind();

            float windDuration = Random.Range(minWindDuration, maxWindDuration);
            yield return new WaitForSeconds(windDuration);

            StopWind();

            // Gradually increase wind strength after each cycle
            currentMinStrength = Mathf.Min(currentMinStrength + strengthIncreaseRate, maxCapStrength);
            currentMaxStrength = Mathf.Min(currentMaxStrength + strengthIncreaseRate, maxCapStrength);
        }
    }

    void GenerateWind()
    {
        currentWindStrength = Random.Range(currentMinStrength, currentMaxStrength);

        float angle = Random.Range(0f, 360f);
        currentWindDirection = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle)).normalized;

        var main = leafParticles.main;
        main.startSpeed = currentWindStrength * 2f;
        leafParticles.transform.rotation = Quaternion.Euler(0, 0, angle - 90);
        leafParticles.Play();

        ball.ApplyWind(currentWindDirection, currentWindStrength);

        // Wind active now
        isWindActive = true;

        // Play wind sound if not playing
        if (windAudio != null && !windAudio.isPlaying)
            windAudio.Play();
    }

    void StopWind()
    {
        leafParticles.Stop();
        ball.ApplyWind(Vector2.zero, 0);

        // Wind no longer active
        isWindActive = false;

        // Stop wind sound if playing
        if (windAudio != null && windAudio.isPlaying)
            windAudio.Stop();
    }
}
