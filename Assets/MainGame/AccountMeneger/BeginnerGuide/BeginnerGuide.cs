using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class BeginnerGuide : MonoBehaviour
{
    [SerializeField] private Animator animator;
    [SerializeField] private GameObject phoneWithNotification;
    [SerializeField] private InstatiateNewMessage personMessagePrefab;
    [SerializeField] private InstatiateNewMessage youMessagePrefab;
    [SerializeField] private Transform transformForMessages;
    [SerializeField] private ScrollRect scrollRect;
    public void InstatiatePersonMessage(string key)
    {
        Instantiate(personMessagePrefab, transformForMessages).SetMessage(key);
        LayoutRebuilder.ForceRebuildLayoutImmediate(scrollRect.content);
    }
    public void InstatiateYouMessage(string key)
    {
        Instantiate(youMessagePrefab, transformForMessages).SetMessage(key);
        LayoutRebuilder.ForceRebuildLayoutImmediate(scrollRect.content);
    }
    public void CloseNotification()
    {
        phoneWithNotification.SetActive(false);
    }
    public void AnimationTrigger(string trigger)
    {
        if (animator != null)
        {
            animator.SetTrigger(trigger);
        }
    }
}
