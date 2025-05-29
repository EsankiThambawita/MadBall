using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public enum DifficultyLevel { Easy, Medium, Hard }
public class GameManager1P : MonoBehaviour
{
    public static GameManager1P Instance;

    [Header("HUD Score Texts")]
    public Text playerScoreText;
    public Text aiScoreText;

    [Header("Game Over UI")]
    public GameOverUIController1P gameOverUIController;

    [Header("Game Difficulty")]
    public DifficultyLevel CurrentDifficulty = DifficultyLevel.Easy;

    private int playerScore = 0;
    private int aiScore = 0;
    private int winningScore = 5;

    private bool gameStarted = false;
    private bool gameEnded = false;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
    }

    void Start()
    {
        Time.timeScale = 1f;

        gameEnded = false;
        gameStarted = false;

        playerScore = 0;
        aiScore = 0;
        playerScoreText.text = "0";
        aiScoreText.text = "0";

        SetDifficultyFromFlutter(SceneLoader.SelectedDifficulty);
    }

    public void SetDifficultyFromFlutter(string difficulty)
    {
        switch (difficulty.ToLower())
        {
            case "easy":
                CurrentDifficulty = DifficultyLevel.Easy;
                break;
            case "medium":
                CurrentDifficulty = DifficultyLevel.Medium;
                break;
            case "hard":
                CurrentDifficulty = DifficultyLevel.Hard;
                break;
            default:
                CurrentDifficulty = DifficultyLevel.Easy;
                break;
        }
    }

    public void StartGame()
    {
        gameStarted = true;
        gameEnded = false;
    }

    public void IncreasePlayerScore()
    {
        if (!gameStarted || gameEnded) return;

        playerScore++;
        playerScoreText.text = playerScore.ToString();
        CheckGameOver();
    }

    public void IncreaseAIScore()
    {
        if (!gameStarted || gameEnded) return;

        aiScore++;
        aiScoreText.text = aiScore.ToString();
        CheckGameOver();
    }

    public void CheckGameOver()
    {
        if (gameEnded) return;

        if (playerScore >= winningScore || aiScore >= winningScore)
        {
            gameEnded = true;

            if (playerScore > aiScore)
                gameOverUIController.ShowWinPanel(playerScore, aiScore);
            else
                gameOverUIController.ShowLosePanel(playerScore, aiScore);

            Time.timeScale = 0f;
        }
    }

    public void SetGameVolume(string value)
    {
        if (float.TryParse(value, out float volume))
        {
            AudioListener.volume = Mathf.Clamp01(volume);
        }
    }
}
