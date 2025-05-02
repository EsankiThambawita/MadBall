using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BallMovement : MonoBehaviour
{
    [SerializeField] private float initialSpeed = 15f;
    [SerializeField] private float speedIncrease = 0.75f;
    [SerializeField] private float wallBounceSpeedIncrease = 0.75f;
    [SerializeField] private float maxSpeed = 30f;
    [SerializeField] private float speedIncreaseInterval = 5f; // 🔧 ADDED
    [SerializeField] private Text playerScore;
    [SerializeField] private Text AIScore;

    private int hitCounter;
    private Rigidbody2D rb;

    // Wind Management Variables
    private Vector2 windForce = Vector2.zero;
    private float windStrength = 0f;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        Invoke("StartBall", 2f); 
        InvokeRepeating("IncreaseSpeed", speedIncreaseInterval, speedIncreaseInterval);     
    }

    private void FixedUpdate()
    {
        // Control current max speed
        float currentSpeed = Mathf.Min(initialSpeed + speedIncrease * hitCounter, maxSpeed);
        rb.linearVelocity = Vector2.ClampMagnitude(rb.linearVelocity, currentSpeed);

        // Wind physics
        if (windStrength > 0)
        {
            Vector2 windEffect = windForce * windStrength;
            rb.linearVelocity += windEffect * Time.fixedDeltaTime;
        }

        // Reapply speed control after wind
        rb.linearVelocity = Vector2.ClampMagnitude(rb.linearVelocity, currentSpeed); 
    }

    private void StartBall()
    {
        hitCounter = 0;

        float randomX = Random.Range(0, 2) == 0 ? -1 : 1;
        float randomY = Random.Range(0, 2) == 0 ? -1 : 1;

        rb.linearVelocity = new Vector2(randomX, randomY).normalized * initialSpeed;
    }

    private void ResetBall()
    {
        rb.linearVelocity = Vector2.zero;
        transform.position = Vector2.zero;
        Invoke("StartBall",1.5f);
    }

    private void PlayerBounce(Transform paddle)
    {
        hitCounter++;

        Vector2 ballPos = transform.position;
        Vector2 paddlePos = paddle.position;
        float paddleHeight = paddle.GetComponent<Collider2D>().bounds.size.y;

        float yDirection = (ballPos.y - paddlePos.y) / (paddleHeight / 2);
        float minXSpeed = 3f;
        float xDirection = rb.linearVelocity.x > 0 ? 1 : -1;

        rb.linearVelocity = new Vector2(xDirection * minXSpeed, yDirection * initialSpeed).normalized * (initialSpeed + speedIncrease * hitCounter);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player") || collision.gameObject.CompareTag("AI"))
        {
            PlayerBounce(collision.transform);
        }
        else if (collision.gameObject.CompareTag("Wall"))
        {
            Vector2 normal = collision.contacts[0].normal;
            rb.linearVelocity = Vector2.Reflect(rb.linearVelocity, normal) * (1 + wallBounceSpeedIncrease);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("AIGoal")) 
        {
            ResetBall();
            AIScore.text = (int.Parse(AIScore.text) + 1).ToString();
        }
        else if (collision.CompareTag("PlayerGoal")) 
        {
            ResetBall();
            playerScore.text = (int.Parse(playerScore.text) + 1).ToString();
        }
    }

    public void ApplyWind(Vector2 direction, float strength)
    {
        windForce = direction;
        windStrength = strength;
    }

    // 🔄 Gradual speed increase over time
    private void IncreaseSpeed()
    {
        float currentSpeed = rb.linearVelocity.magnitude;
        if (currentSpeed < maxSpeed)
        {
            rb.linearVelocity = rb.linearVelocity.normalized * Mathf.Min(currentSpeed + speedIncrease, maxSpeed);
        }
    }
}
