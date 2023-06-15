using UnityEngine;
using TMPro;

public class ReviewView : MonoBehaviour
{
    [SerializeField] ReviewsInteractor reviewsInteractor;
    [SerializeField] private TextMeshProUGUI reviewsScore;
    [SerializeField] private TextMeshProUGUI reviewsCount;
    private void Start()
    {
        //reviewsInteractor = GameObject.FindObjectOfType<ReviewsInteractor>();
        reviewsInteractor.onChangeReviews += UpdateView;
        UpdateView(reviewsInteractor.GetReviewScore(), reviewsInteractor.GetCountReviews());
        Debug.Log(reviewsInteractor.GetReviewScore() + " " + reviewsInteractor.GetCountReviews());
    }
    void UpdateView(float score, int count)
    {
        reviewsScore.text = score.ToString("0.0");
        reviewsCount.text = $"({count.ToString()} reviews)";
    }
    private void Update()
    {
        if (Input.GetKey(KeyCode.Alpha1))
        {
            reviewsInteractor.AddReview(1);
            Debug.Log("AddReviews: " + 1);
        }
        if (Input.GetKey(KeyCode.Alpha2))
        {
            reviewsInteractor.AddReview(2);
            Debug.Log("AddReviews: " + 2);
        }
        if (Input.GetKey(KeyCode.Alpha3))
        {
            reviewsInteractor.AddReview(3);
            Debug.Log("AddReviews: " + 3);
        }
        if (Input.GetKey(KeyCode.Alpha4))
        {
            reviewsInteractor.AddReview(4);
            Debug.Log("AddReviews: " + 4);
        }
        if (Input.GetKey(KeyCode.Alpha5))
        {
            reviewsInteractor.AddReview(5);
            Debug.Log("AddReviews: " + 5);
        }
    }
}
