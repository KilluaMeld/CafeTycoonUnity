using TMPro;
using UnityEngine;
using ConvertsDigits;

public class CoinsUI : MonoBehaviour
{
    [SerializeField] private CoinsInteractor _interactor;
    [SerializeField] private TextMeshProUGUI _coinsText;

    private void Start()
    {
        _interactor.onChangeCoins += UpdateView;
        UpdateView(_interactor.GetCoinsValue());

    }

    private void UpdateView(float coins)
    {
        _coinsText.text = Converter.FormatNum(coins);
    }
    private void Update()
    {
        if (Input.GetKey(KeyCode.P))
        {
            _interactor.AddCoins(this,1);
        }
        if (Input.GetKey(KeyCode.M))
        {
            _interactor.SpendCoins(this, 1);
        }
    }
}
