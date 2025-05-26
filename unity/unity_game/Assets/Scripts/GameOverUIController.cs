using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using FlutterUnityIntegration;


public class GameOverUIController : MonoBehaviour
{
    public GameObject winBackground;
    public GameObject loseBackground;

    public TextMeshProUGUI winPlayerScoreText;
    public TextMeshProUGUI winBotScoreText;

    public TextMeshProUGUI losePlayerScoreText;
    public TextMeshProUGUI loseBotScoreText;

    public GameObject backgroundFade;

    public AudioSource winAudio;
    public AudioSource loseAudio;

    public WindManager windManager; 

    public void ShowWinPanel(int playerScore, int botScore)
    {
        backgroundFade.SetActive(true);
        winBackground.SetActive(true);
        loseBackground.SetActive(false);

        winPlayerScoreText.text = $"Player : {playerScore}";
        winBotScoreText.text = $"Bot : {botScore}";

        if (winAudio != null)
            winAudio.Play();

        StartCoroutine(windManager.FadeOutBgmAndWind(1.5f, 0f));
    }

    public void ShowLosePanel(int playerScore, int botScore)
    {
        backgroundFade.SetActive(true);
        loseBackground.SetActive(true);
        winBackground.SetActive(false);

        loseBotScoreText.text = $"Bot : {botScore}";
        losePlayerScoreText.text = $"Player : {playerScore}";

        if (loseAudio != null)
            loseAudio.Play();

        StartCoroutine(windManager.FadeOutBgmAndWind(1.5f, 0f));
    }

    public void OnRetryButton()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void OnMapsButton()
    {
        Debug.Log("Maps clicked");

        // Send message to Flutter instead of quitting
        UnityMessageManager.Instance.SendMessageToFlutter("maps");
    }

    public void OnNextButton()
    {
        // Placeholder for level switch
    }
}