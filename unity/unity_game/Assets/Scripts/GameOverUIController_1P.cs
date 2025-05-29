using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using FlutterUnityIntegration;

public class GameOverUIController1P : MonoBehaviour
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

    private bool didPlayerWin = false;

    public void ShowWinPanel(int playerScore, int botScore)
    {
        didPlayerWin = true;

        backgroundFade.SetActive(true);
        winBackground.SetActive(true);
        loseBackground.SetActive(false);

        winPlayerScoreText.text = $"Player : {playerScore}";
        winBotScoreText.text = $"Bot : {botScore}";

        if (winAudio != null)
            winAudio.Play();

        StartCoroutine(windManager.FadeOutBgmAndWind(1.5f, 0f));

        // Send win + difficulty to Flutter
        var difficulty = GameManager1P.Instance.CurrentDifficulty.ToString().ToLower();
        var sceneName = SceneManager.GetActiveScene().name.ToLower(); // e.g., "space_1p"
        var map = sceneName.Split('_')[0]; // "space", "desert", etc.

        UnityMessageManager.Instance.SendMessageToFlutter($"win|{map}|{difficulty}");
    }

    public void ShowLosePanel(int playerScore, int botScore)
    {
        didPlayerWin = false;
        
        backgroundFade.SetActive(true);
        loseBackground.SetActive(true);
        winBackground.SetActive(false);

        losePlayerScoreText.text = $"Player : {playerScore}";
        loseBotScoreText.text = $"Bot : {botScore}";

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

        UnityMessageManager.Instance.SendMessageToFlutter("maps");
    }

    public void OnNextButton()
    {
        if (!didPlayerWin)
        {
            UnityMessageManager.Instance.SendMessageToFlutter("toast|You need to beat this difficulty to continue.");
            return;
        }

        var current = GameManager1P.Instance.CurrentDifficulty;
        DifficultyLevel? next = null;

        switch (current)
        {
            case DifficultyLevel.Easy:
                next = DifficultyLevel.Medium;
                break;
            case DifficultyLevel.Medium:
                next = DifficultyLevel.Hard;
                break;
            case DifficultyLevel.Hard:
                UnityMessageManager.Instance.SendMessageToFlutter("toast|Congratulations! You defeated the hardest difficulty!");
                return;
        }

        if (next.HasValue)
        {
            var nextDiff = next.Value.ToString().ToLower();
            var sceneName = SceneManager.GetActiveScene().name.ToLower();
            UnityMessageManager.Instance.SendMessageToFlutter($"next|{nextDiff}|{sceneName}");
        }
    }
}
