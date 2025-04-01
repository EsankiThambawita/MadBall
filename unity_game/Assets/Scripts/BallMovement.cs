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
    [SerializeField] private Text playerScore;
    [SerializeField] private Text AIScore;

    private int hitCounter;
    private Rigidbody2D rb;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        Invoke("StartBall", 2f); // Start ball after 2 seconds
    }

    private void FixedUpdate()
    {
        // Keep ball speed under control
        rb.linearVelocity = Vector2.ClampMagnitude(rb.linearVelocity, Mathf.Min(initialSpeed + speedIncrease * hitCounter, maxSpeed));

        //Wind Physics
        float currentSpeed = Mathf.Min(initialSpeed + speedIncrease * hitCounter, maxSpeed);

        // Apply wind force when active
        if (windStrength > 0)
        {
            Vector2 windEffect = windForce * windStrength;
            rb.linearVelocity += windEffect * Time.fixedDeltaTime; // Apply wind gradually
        }

        // Keep ball speed controlled
        rb.linearVelocity = Vector2.ClampMagnitude(rb.linearVelocity, currentSpeed); 
    }

    private void StartBall()
    {
        hitCounter = 0;

        // Random direction (top-left or top-right)
        float randomX = Random.Range(0, 2) == 0 ? -1 : 1;
        float randomY = Random.Range(0, 2) == 0 ? -1 : 1;

        rb.linearVelocity = new Vector2(randomX, randomY).normalized * initialSpeed;
    }

    private void ResetBall()
    {
        rb.linearVelocity = Vector2.zero;  // Stop ball movement
        transform.position = Vector2.zero; // Reset to center
        Invoke("StartBall", 2f); // Restart after 2 seconds
    }

    private void PlayerBounce(Transform paddle)
    {
        hitCounter++;

        Vector2 ballPos = transform.position;
        Vector2 paddlePos = paddle.position;
        float paddleHeight = paddle.GetComponent<Collider2D>().bounds.size.y;

        // Get bounce direction based on hit position
        float yDirection = (ballPos.y - paddlePos.y) / (paddleHeight / 2);
        
        // Ensure the ball has enough horizontal speed
        float minXSpeed = 3f;  // Ensures it doesn't move purely vertically
        float xDirection = rb.linearVelocity.x > 0 ? 1 : -1; // Keep moving in the same X direction

        // Apply new velocity
        rb.linearVelocity = new Vector2(xDirection * minXSpeed, yDirection * initialSpeed).normalized * (initialSpeed + speedIncrease * hitCounter);
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Player or AI paddle collision
        if (collision.gameObject.CompareTag("Player") || collision.gameObject.CompareTag("AI"))
        {
            PlayerBounce(collision.transform);
        }
        // Side walls bounce
        else if (collision.gameObject.CompareTag("Wall"))
        {
            // Reflect ball's direction when hitting side walls
            Vector2 normal = collision.contacts[0].normal;
            rb.linearVelocity = Vector2.Reflect(rb.linearVelocity, normal) * (1 + wallBounceSpeedIncrease);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("AIGoal")) 
        {
            ResetBall();
            AIScore.text = (int.Parse(AIScore.text) + 1).ToString(); // AI scores
        }
        else if (collision.CompareTag("PlayerGoal")) 
        {
            ResetBall();
            playerScore.text = (int.Parse(playerScore.text) + 1).ToString(); // Player scores
        }
    }




    //Wind Management
    private Vector2 windForce = Vector2.zero;
    private float windStrength = 0f;

    public void ApplyWind(Vector2 direction, float strength)
    {
        windForce = direction;
        windStrength = strength;
    }



}
