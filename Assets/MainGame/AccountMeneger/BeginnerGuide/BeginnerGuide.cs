using UnityEngine;
using TMPro;

public class BeginnerGuide : MonoBehaviour
{
    [SerializeField] private Animator animator;
    [SerializeField] private GameObject phoneWithNotification;
    [SerializeField] private TextMeshProUGUI firstText;
    [SerializeField] private TextMeshProUGUI secondText;
    public void SetFirstText(string key)
    {
        firstText.text = ApplicationSettings.instance.Localizations.GetLocalizationFromKey(key);
    }
    public void SetSecondText(string key)
    {
        secondText.text = ApplicationSettings.instance.Localizations.GetLocalizationFromKey(key);
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
