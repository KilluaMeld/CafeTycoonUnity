using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class InstatiateNewMessage : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI textMessage;
    public void SetMessage(string key)
    {
        Debug.Log(ApplicationSettings.instance.Localizations.GetLocalizationFromKey(key)); 
        textMessage.text = ApplicationSettings.instance.Localizations.GetLocalizationFromKey(key);
    }
}
