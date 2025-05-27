using UnityEngine;
using UnityEngine.UI;

public class BallMovement1P : MonoBehaviour
{
    [SerializeField] private float initialSpeed = 15f;
    [SerializeField] private float speedIncrease = 0.3f;
    [SerializeField] private float wallBounceSpeedIncrease = 0.3f;
    [SerializeField] private float maxSpeed = 20f;
    [SerializeField] private float speedIncreaseInterval = 10f;
    [SerializeField] private AudioSource paddleHitAudio;
    [SerializeField] private AudioSource goalAudioSource;
    [SerializeField] private AudioClip missSound;

    private int hitCounter;
    private Rigidbody2D rb;

    private Vector2 windForce = Vector2.zero;
    private float windStrength = 0f;

    private float soundCooldown = 0.1f;
    private float lastSoundTime = -1f;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        Invoke("StartBall", 2f);
        InvokeRepeating("IncreaseSpeed", speedIncreaseInterval, speedIncreaseInterval);
    }

    private void FixedUpdate()
    {
        float currentSpeed = Mathf.Min(initialSpeed + speedIncrease * hitCounter, maxSpeed);
        rb.linearVelocity = Vector2.ClampMagnitude(rb.linearVelocity, currentSpeed);

        if (windStrength > 0)
        {
            Vector2 windEffect = windForce * windStrength;
            rb.linearVelocity += windEffect * Time.fixedDeltaTime;
        }

        rb.linearVelocity = Vector2.ClampMagnitude(rb.linearVelocity, currentSpeed);
    }

    private void StartBall()
    {
        hitCounter = 0;
        float randomX = Random.Range(0, 2) == 0 ? -1 : 1;
        float randomY = Random.Range(0, 2) == 0 ? -1 : 1;
        rb.linearVelocity = new Vector2(randomX, randomY).normalized * initialSpeed;

        GameManager1P.Instance.StartGame();
    }

    private void ResetBall()
    {
        rb.linearVelocity = Vector2.zero;
        transform.position = Vector2.zero;
        Invoke("StartBall", 1.5f);
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

        if (Mathf.Abs(yDirection) < 0.2f)
            yDirection = Random.Range(0.3f, 0.5f) * (Random.value > 0.5f ? 1 : -1);

        Vector2 direction = new Vector2(xDirection, yDirection).normalized;
        float speed = Mathf.Min(initialSpeed + speedIncrease * hitCounter, maxSpeed);
        rb.linearVelocity = direction * speed;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player") || collision.gameObject.CompareTag("AI"))
        {
            PlayerBounce(collision.transform);
            if (Time.time - lastSoundTime > soundCooldown && paddleHitAudio != null)
            {
                paddleHitAudio.Play();
                lastSoundTime = Time.time;
            }
        }
        else if (collision.gameObject.CompareTag("Wall"))
        {
            Vector2 normal = collision.contacts[0].normal;
            rb.linearVelocity = Vector2.Reflect(rb.linearVelocity, normal) * (1 + wallBounceSpeedIncrease);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (goalAudioSource != null && missSound != null)
            goalAudioSource.PlayOneShot(missSound);

        if (collision.CompareTag("AIGoal"))
        {
            ResetBall();
            GameManager1P.Instance.IncreaseAIScore();
        }
        else if (collision.CompareTag("PlayerGoal"))
        {
            ResetBall();
            GameManager1P.Instance.IncreasePlayerScore();
        }
    }

    public void ApplyWind(Vector2 direction, float strength)
    {
        windForce = direction;
        windStrength = strength;
    }

    private void IncreaseSpeed()
    {
        float currentSpeed = rb.linearVelocity.magnitude;
        if (currentSpeed < maxSpeed)
            rb.linearVelocity = rb.linearVelocity.normalized * Mathf.Min(currentSpeed + speedIncrease, maxSpeed);
    }
}
