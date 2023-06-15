using System;
using System.Collections.Generic;
using UnityEngine;

public class ReviewsRepository : MonoBehaviour
{
    public const string KEY = "ReviewsRep";
    public List<int> Review = new List<int>();
    private PlayerPrefsSaver _prefsSaver = new PlayerPrefsSaver();

    public ReviewsRepository()
    {
        _prefsSaver.Load<ReviewsMass>(KEY, Initialize);
    }

    public void Initialize(ReviewsMass reviewsRep)
    {
        foreach (int review in reviewsRep.Reviews)
        {
            Review.Add(review);
        }
    }

    public void Save()
    {
        ReviewsMass reviewsMass = new ReviewsMass();
        reviewsMass.Reviews = Review.ToArray();
        _prefsSaver.Save(KEY, reviewsMass);
    }
}

[Serializable]
public class ReviewsMass
{
    public int[] Reviews;
}
