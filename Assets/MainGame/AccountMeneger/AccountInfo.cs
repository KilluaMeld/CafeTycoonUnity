using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class AccountInfo : MonoBehaviour
{
    bool firstLoadGame = true;
    const string KEY = "ACCOUNTINFO";


    [SerializeField] private Sprite[] _iconsList;
    [SerializeField] private GameObject _accountInfoPanel;
    [SerializeField] private TextMeshProUGUI _nameText;
    [SerializeField] private Image _iconImage;

    [SerializeField] private GameObject _newAccountPanelPrefab;
    [SerializeField] private Transform _canvasTransform;

    [SerializeField] private int _iconID;
    [SerializeField] private string _name;

    public AccountLevel accountLevel = new AccountLevel();

    public string Name { get { return _name; } }
    private void Awake()
    {
        _accountInfoPanel.SetActive(false);
        LoadInfo();
        if (!firstLoadGame)
        {
            SetAccountInfoUI();

            _accountInfoPanel.SetActive(true);
        }
        else
        {
            Instantiate(_newAccountPanelPrefab, _canvasTransform);
        }

    }
    private void SaveInfo()
    {
        SaveAccount saveAccount = new SaveAccount();

        saveAccount.IconId = _iconID;
        saveAccount.Name = _name;
        saveAccount.firstLoadGame = firstLoadGame;
        saveAccount.Level = accountLevel.Level;
        saveAccount.Exp = accountLevel.Exp;

        PlayerPrefs.SetString(KEY, JsonUtility.ToJson(saveAccount));
    }
    private void LoadInfo()
    {
        SaveAccount saveAccount = new SaveAccount();
        saveAccount = JsonUtility.FromJson<SaveAccount>(PlayerPrefs.GetString(KEY));
        if (saveAccount == null)
            return;

        _iconID = saveAccount.IconId;
        _name = saveAccount.Name;
        accountLevel.LoadLevel(saveAccount.Level, saveAccount.Exp);

        firstLoadGame = saveAccount.firstLoadGame;
    }
    private void SetAccountInfoUI()
    {
        _iconImage.sprite = _iconsList[_iconID];
        _nameText.text = _name;
    }
    public void SetNewAccountInfo(string name, int iconId = 0)
    {
        firstLoadGame = false;
        _name = name;
        _iconID = iconId;

        SetAccountInfoUI();
        _accountInfoPanel.SetActive(true);

        SaveInfo();
    }


}
[Serializable]
class SaveAccount
{
    public bool firstLoadGame;

    public int IconId;
    public string Name;
    public int Level;
    public float Exp;

}