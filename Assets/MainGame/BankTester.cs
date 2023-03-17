using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BankTester : MonoBehaviour
{
    [SerializeField] Button minus;
    [SerializeField] Button plus;
    [SerializeField] CoinsInteractor coinsInteractor;
    void Start()
    {
        coinsInteractor.onChange += log;
        minus.onClick.AddListener(MinusCoins);
        plus.onClick.AddListener(PlusCoins);
    }
    void log(float value)
    {
        Debug.Log($"Balance: {value}");
    }
    void PlusCoins()
    {
        coinsInteractor.SpendCoins(this, 10);
    }
    void MinusCoins()
    {
        coinsInteractor.AddCoins(this, 15);
    }

}
