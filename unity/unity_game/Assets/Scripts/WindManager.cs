using System.Collections;
using UnityEngine;

public class WindManager : MonoBehaviour
{
    public ParticleSystem leafParticles;
    public BallMovement ball;

    public AudioSource windAudio;
    public AudioSource bgmAudio;

    [SerializeField] private float bgmVolumeNormal = 0.4f;
    [SerializeField] private float bgmVolumeDucked = 0.01f;
    [SerializeField] private float fadeSpeed = 1f;

    private bool isWindActive = false;
    private bool isGameOver = false;

    private void Start()
    {
        if (bgmAudio != null)
            bgmAudio.volume = bgmVolumeNormal;
        leafParticles.Stop();

        StartCoroutine(WindEffectLoop());
    }

    private void Update()
    {
        if (bgmAudio == null || isGameOver)
            return;

        float targetVol = isWindActive ? bgmVolumeDucked : bgmVolumeNormal;
        bgmAudio.volume = Mathf.MoveTowards(bgmAudio.volume, targetVol, fadeSpeed * Time.deltaTime);
    }

    private IEnumerator WindEffectLoop()
    {
        while (!isGameOver)
        {
            yield return new WaitForSeconds(Random.Range(4f, 8f));

            isWindActive = true;

            Vector2 windDirection = new Vector2(Random.Range(-1f, 1f), 0f).normalized;
            float windStrength = Random.Range(1f, 2f);
            ball.ApplyWind(windDirection, windStrength);

            if (leafParticles != null)
                leafParticles.Play();

            if (windAudio != null)
                windAudio.Play();

            yield return new WaitForSeconds(Random.Range(3f, 5f));

            StopWind();
        }
    }

    public void StopWind()
    {
        leafParticles.Stop();
        ball.ApplyWind(Vector2.zero, 0);
        isWindActive = false;

        if (windAudio != null && windAudio.isPlaying)
            windAudio.Stop();
    }

    public IEnumerator FadeOutBgmAndWind(float duration, float bgmTargetVolume)
    {
        isGameOver = true;
        StopWind();

        float startBgmVol = bgmAudio != null ? bgmAudio.volume : 0f;
        float startWindVol = windAudio != null ? windAudio.volume : 0f;

        float elapsed = 0f;
        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;

            if (bgmAudio != null)
                bgmAudio.volume = Mathf.Lerp(startBgmVol, bgmTargetVolume, t);

            if (windAudio != null)
            {
                windAudio.volume = Mathf.Lerp(startWindVol, 0f, t);
                if (t >= 1f)
                    windAudio.Stop();
            }

            yield return null;
        }

        if (bgmAudio != null)
            bgmAudio.volume = bgmTargetVolume;

        if (windAudio != null && windAudio.isPlaying)
            windAudio.Stop();
    }
}
