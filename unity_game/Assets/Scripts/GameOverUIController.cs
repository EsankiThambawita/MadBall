using UnityEngine;
using TMPro; 
using UnityEngine.SceneManagement;

public class GameOverUIController : MonoBehaviour
{
    public GameObject winBackground;
    public GameObject loseBackground;

    public TextMeshProUGUI winPlayerScoreText;
    public TextMeshProUGUI winBotScoreText;

    public TextMeshProUGUI losePlayerScoreText;
    public TextMeshProUGUI loseBotScoreText;

    public void ShowWinPanel(int playerScore, int botScore)
    {
        winBackground.SetActive(true);
        loseBackground.SetActive(false);

        winPlayerScoreText.text = $"Player : {playerScore}";
        winBotScoreText.text = $"Bot : {botScore}";
    }

    public void ShowLosePanel(int playerScore, int botScore)
    {
        loseBackground.SetActive(true);
        winBackground.SetActive(false);

        loseBotScoreText.text = $"Bot : {botScore}";
        losePlayerScoreText.text = $"Player : {playerScore}";
    }

    // Called by Retry button
    public void OnRetryButton()
    {
        Time.timeScale = 1f; // Resume game time before restarting
        SceneManager.LoadScene(SceneManager.GetActiveScene().name); // Reload current scene
    }

    // Called by Maps button (Flutter integration later)
    public void OnMapsButton()
    {
        // TODO: Call Flutter method to load map selection screen
        // Example: UnityMessageManager.Instance.SendMessageToFlutter("goToMapSelection");
    }

    // Called by Next button (difficulty progression)
    public void OnNextButton()
    {
        // TODO: Implement difficulty level switch and scene loading
        // Example: LoadNextDifficultyLevel();
    }
}
