using UnityEngine;

public class AsteroidCollisionSound : MonoBehaviour
{
    [SerializeField] private AudioSource audioSource;

    void Start()
    {
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ball")) 
        {
            if (audioSource != null)
            {
                audioSource.Play();
            }
        }
    }
}
