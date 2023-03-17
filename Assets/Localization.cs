using UnityEngine;
using TMPro;
using System.Collections.Generic;
using System;

public class Localization : MonoBehaviour
{

    public static Localization Instance;
    [SerializeField] private TMP_FontAsset _englishFont;
    [SerializeField] private TMP_FontAsset _russianFont;
    [SerializeField] private LanguageList _language;
    public delegate void LocalizationDelegate();
    public LocalizationDelegate localizationDelegate;

    Dictionary<string, string[]> _stringDictionary = new Dictionary<string, string[]>()
    {
        {"Tea", new string[]{ "1", "2"} },
        {"logo", new string[]{ "Eng", "Рус" }},
        {"Espresso", new string[]{ "Eng", "Рус" }},
        {"Cake", new string[]{ "Eng", "Рус" }},
        {"GreenTea", new string[]{ "Eng", "Рус" }}
    };

    enum LanguageList
    {
        English,
        Russian
    }

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this);
        }
    }

    public void SetLanguage(int lang)
    {
        _language = (LanguageList)lang;
        localizationDelegate?.Invoke();
    }

    public Tuple<TMP_FontAsset, string> GetLocalization(string key)
    {
        switch (_language)
        {
            case LanguageList.English: return Tuple.Create(_englishFont, _stringDictionary[key][(int)_language]);
            case LanguageList.Russian: return Tuple.Create(_russianFont, _stringDictionary[key][(int)_language]);
            default: return Tuple.Create(_englishFont, _stringDictionary[key][(int)_language]);
        }
    }

    public string GetLocalizationFromKey(string key)
    {
        return _stringDictionary[key][(int)_language];
    }
}