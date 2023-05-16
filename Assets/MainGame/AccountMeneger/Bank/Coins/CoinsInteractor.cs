using System;
using UnityEngine;

public class CoinsInteractor : MonoBehaviour
{
    public Action<float> onChangeCoins;

    CoinsRepository coinsRepository;
    private void Awake()
    {
        coinsRepository = new CoinsRepository();
        onChangeCoins?.Invoke(coinsRepository.Coins);
    }

    public float GetCoinsValue()
    {
        return coinsRepository.Coins;
    }
    public void AddCoins(object sender,float value)
    {
        coinsRepository.Coins += value;
        coinsRepository.Save();
        onChangeCoins?.Invoke(coinsRepository.Coins);
    }
    public bool SpendCoins(object sender, float value)
    {
        if (coinsRepository.Coins >= value)
        {
            coinsRepository.Coins -= value;
            coinsRepository.Save();
            onChangeCoins?.Invoke(coinsRepository.Coins);
            return true;
        }
        else
        {
            Debug.Log("enough coins");
            return false;
        }
    }
}
