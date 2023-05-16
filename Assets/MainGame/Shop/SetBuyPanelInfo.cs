using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using ConvertsDigits;
using UnityEditor.Rendering.LookDev;

public class SetBuyPanelInfo : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TextMeshProUGUI nameText;
    [SerializeField] private TextMeshProUGUI priseText;
    [SerializeField] private float allPrise;
    [SerializeField] private int count;
    [SerializeField] private TextMeshProUGUI countText;
    [SerializeField] private Image iconCurrency;

    [SerializeField] private Button buyButton;
    [SerializeField] private Button closeButton;
    [SerializeField] private Button plusCountButton;
    [SerializeField] private Button minusCountButton;

    public Ingredient ingredient;
    private CoinsInteractor coinsInteractor;
    public void SetShopSlotInfo(Ingredient ingredient)
    {
        this.ingredient = ingredient;
        icon.sprite = ingredient.Data.Icon;
        nameText.text = ingredient.Data.Key;

        count = 1;
        countText.text = Converter.FormatNum(count);
        UpdatePrisse();


        buyButton.onClick.AddListener(BuyItem);
        closeButton.onClick.AddListener(DestroyBuyPanel);
        plusCountButton.onClick.AddListener(PlusCount);
        minusCountButton.onClick.AddListener(MinusCount);
    }
    private void OnEnable()
    {
        coinsInteractor = GameObject.FindObjectOfType<CoinsInteractor>();
    }
    void PlusCount()
    {
        count++;
        countText.text = Converter.FormatNum(count);
        UpdatePrisse();
    }
    void MinusCount()
    {
        count--;
        if (count <= 0)
            count = 0;

        countText.text = Converter.FormatNum(count);
        UpdatePrisse();
    }
    void DestroyBuyPanel()
    {
        Destroy(this.gameObject);
    }
    void UpdatePrisse()
    {
           allPrise =  count * ingredient.Data.Prise;
        priseText.text = Converter.FormatNum(allPrise);
    }
    void BuyItem()
    {
        if (!coinsInteractor.SpendCoins(this, allPrise))
            return;

        ingredient.PlusAmmount(count);
        DestroyBuyPanel();
    }
}
