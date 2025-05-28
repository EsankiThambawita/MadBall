using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using FlutterUnityIntegration;

public class GameOverUIController2P : MonoBehaviour
{
    public GameObject backgroundFade;
    public GameObject gameOverUIBackground;

    public TextMeshProUGUI player1Label;       // "Player 1:"
    public TextMeshProUGUI player2Label;       // "Player 2:"
    public TextMeshProUGUI player1ScoreText;   // Score value
    public TextMeshProUGUI player2ScoreText;

    public AudioSource winAudio;               // Only win audio

    public WindManager windManager;

    public float normalFontSize = 36f;
    public float winnerFontSize = 54f;
    public float yOffset = 20f;

    private Vector3 player1OriginalPos;
    private Vector3 player2OriginalPos;

    void Start()
    {
        // Store original positions to reset later
        player1OriginalPos = player1ScoreText.rectTransform.localPosition;
        player2OriginalPos = player2ScoreText.rectTransform.localPosition;
    }

    public void ShowGameOverPanel(int player1Score, int player2Score)
    {
        backgroundFade.SetActive(true);
        gameOverUIBackground.SetActive(true);

        player1Label.text = "Player 1:";
        player2Label.text = "Player 2:";

        player1ScoreText.text = player1Score.ToString();
        player2ScoreText.text = player2Score.ToString();

        // Reset font sizes and positions
        // player1ScoreText.fontSize = normalFontSize;
        // player2ScoreText.fontSize = normalFontSize;
        // player1ScoreText.rectTransform.localPosition = player1OriginalPos;
        // player2ScoreText.rectTransform.localPosition = player2OriginalPos;

        // if (player1Score > player2Score)
        // {
        //     player1ScoreText.fontSize = winnerFontSize;
        //     player1ScoreText.rectTransform.localPosition = player1OriginalPos + new Vector3(0, yOffset, 0);

        //     player1Label.fontSize = winnerFontSize;
        //     player1Label.rectTransform.localPosition = player1Label.rectTransform.localPosition + new Vector3(0, yOffset, 0);
        // }
        // else if (player2Score > player1Score)
        // {
        //     player2ScoreText.fontSize = winnerFontSize;
        //     player2ScoreText.rectTransform.localPosition = player2OriginalPos + new Vector3(0, yOffset, 0);

        //     player2Label.fontSize = winnerFontSize;
        //     player2Label.rectTransform.localPosition = player2Label.rectTransform.localPosition + new Vector3(0, yOffset, 0);
        // }

        if (winAudio != null)
            winAudio.Play();

        StartCoroutine(windManager.FadeOutBgmAndWind(1.5f, 0f));
    }

    public void OnRetryButton()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void OnMapsButton()
    {
        UnityMessageManager.Instance.SendMessageToFlutter("maps");
    }

    public void OnNextButton()
    {
        // Add level-switching logic if needed
    }
}
