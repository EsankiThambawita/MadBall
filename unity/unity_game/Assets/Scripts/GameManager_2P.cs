using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager2P : MonoBehaviour
{
    public static GameManager2P Instance;

    [Header("HUD Score Texts")]
    public Text player1ScoreText;
    public Text player2ScoreText;

    [Header("Game Over UI")]
    public GameOverUIController2P gameOverUIController;

    private int player1Score = 0;
    private int player2Score = 0;
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
        player1Score = 0;
        player2Score = 0;
        player1ScoreText.text = "0";
        player2ScoreText.text = "0";
    }

    public void StartGame()
    {
        gameStarted = true;
        gameEnded = false;
    }

    public void IncreasePlayer1Score()
    {
        if (!gameStarted || gameEnded) return;

        player1Score++;
        player1ScoreText.text = player1Score.ToString();
        CheckGameOver();
    }

    public void IncreasePlayer2Score()
    {
        if (!gameStarted || gameEnded) return;

        player2Score++;
        player2ScoreText.text = player2Score.ToString();
        CheckGameOver();
    }

    private void CheckGameOver()
    {
        if (gameEnded) return;

        if (player1Score >= winningScore || player2Score >= winningScore)
        {
            gameEnded = true;

            gameOverUIController.ShowGameOverPanel(player1Score, player2Score);

            Time.timeScale = 0f;
        }
    }

    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
