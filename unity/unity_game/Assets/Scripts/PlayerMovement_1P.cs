using UnityEngine;

public class PlayerMovement1P : MonoBehaviour
{
    [SerializeField] private float movementSpeed;
    [SerializeField] private bool isAI;
    [SerializeField] private GameObject ball;

    private Rigidbody2D rb;
    private Vector2 playerMove;

    private float minX, maxX;  // To limit paddle movement
    private float paddleHeight;
    private bool isDragging = false;  // To track when player is holding the paddle
    private Vector2 screenBounds;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();

        // Get screen boundaries
        screenBounds = Camera.main.ScreenToWorldPoint(new Vector2(Screen.width, Screen.height));

        // Set limits for paddle movement
        paddleHeight = GetComponent<Collider2D>().bounds.extents.y;
        minX = -screenBounds.x + paddleHeight;
        maxX = screenBounds.x - paddleHeight;
    }

    void Update()
    {
        if (isAI)
        {
            AIControl();
        }
        else
        {
            HandleTouchInput();
        }
    }

    private void HandleTouchInput()
    {
        if (Input.GetMouseButtonDown(0)) // Detect initial touch
        {
            Vector2 touchPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Collider2D hit = Physics2D.OverlapPoint(touchPos);

            if (hit != null && hit.gameObject == gameObject)  // Check if the paddle is touched
            {
                isDragging = true;
            }
        }

        if (Input.GetMouseButton(0) && isDragging) // While dragging the paddle
        {
            Vector2 touchPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            float clampedX = Mathf.Clamp(touchPos.x, minX, maxX); // Limit paddle movement
            transform.position = new Vector2(clampedX, transform.position.y);
        }

        if (Input.GetMouseButtonUp(0)) // When the player releases the paddle
        {
            isDragging = false;
        }
    }

    private void AIControl()
    {
        if (ball.transform.position.x > transform.position.x + 0.5f)
        {
            playerMove = new Vector2(1, 0);  // Move right
        }
        else if (ball.transform.position.x < transform.position.x - 0.5f)
        {
            playerMove = new Vector2(-1, 0);  // Move left
        }
        else
        {
            playerMove = new Vector2(0, 0);  // Stop moving
        }
    }

    void FixedUpdate()
    {
        // Apply horizontal movement
        rb.linearVelocity = new Vector2(playerMove.x * movementSpeed, rb.linearVelocity.y);

        // Clamp vertical movement
        float clampedY = Mathf.Clamp(transform.position.y, -screenBounds.y + paddleHeight, screenBounds.y - paddleHeight);
        transform.position = new Vector2(transform.position.x, clampedY);
    }
}
