using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AccountLevelView : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _levelText;
    [SerializeField] private Image _levelExpLine;
    private AccountInfo accountInfo;

    private void Start()
    {
        accountInfo = GameObject.FindObjectOfType<AccountInfo>();
        accountInfo.accountLevel.onExpUpdate += UpdateLevelInfo;
        UpdateLevelInfo(accountInfo.accountLevel.Level, accountInfo.accountLevel.Exp);
    }
    void UpdateLevelInfo(int level, float exp)
    {
        _levelText.text = level.ToString() + " Level";
        Debug.Log("exp: "+exp);
        Debug.Log("exp/1000: "+exp/1000);
        _levelExpLine.fillAmount = exp/1000;

    }
}
