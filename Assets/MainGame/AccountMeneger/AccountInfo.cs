using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using Unity.VisualScripting;

public class AccountInfo : MonoBehaviour
{
    bool firstLoadGame = true;
    const string KEY = "ACCOUNTINFO";


    [SerializeField] private GameObject _accountInfoPanel;
    [SerializeField] private TextMeshProUGUI _nameText;
    [SerializeField] private Image _iconImage;

    [SerializeField] private GameObject _newAccountPanelPrefab;
    [SerializeField] private Transform _canvasTransform;

    [SerializeField] private int _iconID;
    [SerializeField] private string _name;

    [SerializeField] private CafeActivity cafeActivity;

    public Sprite[] _iconsList;
    public string Name { get { return _name; } }

    private PlayerPrefsSaver _prefsSaver = new PlayerPrefsSaver();
    private void Awake()
    {
        _accountInfoPanel.SetActive(false);
        _prefsSaver.Load<SaveAccount>(KEY, LoadInfo);
        if (!firstLoadGame)
        {
            SetAccountInfoUI();

            _accountInfoPanel.SetActive(true);

            cafeActivity.TimeCafeActivityScaler = 1;
        }
        else
        {
            cafeActivity.TimeCafeActivityScaler = 0;
            Instantiate(_newAccountPanelPrefab, _canvasTransform);
        }

    }
    private void SaveInfo()
    {
        SaveAccount saveAccount = new SaveAccount();

        saveAccount.IconId = _iconID;
        saveAccount.Name = _name;
        saveAccount.firstLoadGame = firstLoadGame;
        _prefsSaver.Save(KEY, saveAccount);
    }
    private void LoadInfo(SaveAccount saveAccount)
    {
        if (saveAccount == null)
            return;

        _iconID = saveAccount.IconId;
        _name = saveAccount.Name;

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

}