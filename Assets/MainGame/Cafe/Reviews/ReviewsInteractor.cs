using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReviewsInteractor : MonoBehaviour
{
    public Action<float, int> onChangeReviews;

    ReviewsRepository reviewsRepository;
    private void Awake()
    {
        reviewsRepository = new ReviewsRepository();
        onChangeReviews?.Invoke(GetReviewScore(), GetCountReviews());
    }

    public float GetReviewScore()
    {
        float score = 0;
        foreach (var item in reviewsRepository.Review)
        {
            score += item;
        }
        if(GetCountReviews() == 0)
        {
            return score;
        }
        return score/GetCountReviews();
    }
    public int GetCountReviews() { 
        return reviewsRepository.Review.Count;
    }

    public void AddReview(int value)
    {
        reviewsRepository.Review.Add(value);
        reviewsRepository.Save();
        onChangeReviews?.Invoke(GetReviewScore(), GetCountReviews());
    }
}
