using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AccountLevelView : MonoBehaviour
{
    [SerializeField] private AccountLevel _interactor;
    [SerializeField] private TextMeshProUGUI _levelText;
    [SerializeField] private Image _levelExpLine;

    private void Start()
    {
        _interactor.onExpUpdate += UpdateLevelInfo;
        UpdateLevelInfo(_interactor.GetLevelValue(), _interactor.GetExpValue());
    }
    void UpdateLevelInfo(int level, float exp)
    {
        _levelText.text = level.ToString() + " Level";
        _levelExpLine.fillAmount = exp/1000;
    }
    private void Update()
    {
        if (Input.GetKey(KeyCode.O))
        {
            _interactor.AddExp(10);
        }
        if (Input.GetKey(KeyCode.N))
        {
            _interactor.AddExp(10, 1);
        }
    }
}
