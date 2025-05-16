using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameOverUIController : MonoBehaviour
{
    [Header("UI Elements")]
    public GameObject winBackground;
    public GameObject loseBackground;

    public TextMeshProUGUI winPlayerScoreText;
    public TextMeshProUGUI winBotScoreText;

    public TextMeshProUGUI losePlayerScoreText;
    public TextMeshProUGUI loseBotScoreText;

    public GameObject backgroundFade;

    [Header("Game Over Sounds")]
    public AudioClip winSound;
    public AudioClip loseSound;
    private AudioSource audioSource;

    [Header("Background Audio Sources")]
    public AudioSource bgmAudioSource;
    public AudioSource windAudioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();

        // Optional safety check
        if (bgmAudioSource == null)
            Debug.LogWarning("BGM AudioSource not assigned in Inspector.");
    }

    public void ShowWinPanel(int playerScore, int botScore)
    {
        StopBackgroundAudio();

        backgroundFade.SetActive(true);
        winBackground.SetActive(true);
        loseBackground.SetActive(false);

        winPlayerScoreText.text = $"Player : {playerScore}";
        winBotScoreText.text = $"Bot : {botScore}";
    }

    public void ShowLosePanel(int playerScore, int botScore)
    {
        StopBackgroundAudio(); // Stops both BGM and Wind

        backgroundFade.SetActive(true);
        loseBackground.SetActive(true);
        winBackground.SetActive(false);

        losePlayerScoreText.text = $"Player : {playerScore}";
        loseBotScoreText.text = $"Bot : {botScore}";
    }


    private void StopBackgroundAudio()
    {
        if (bgmAudioSource != null && bgmAudioSource.isPlaying)
            bgmAudioSource.Stop();

        if (windAudioSource != null && windAudioSource.isPlaying)
            windAudioSource.Stop();
    }

    public void OnRetryButton()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void OnMapsButton() { }

    public void OnNextButton() { }
}
