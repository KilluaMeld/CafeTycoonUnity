using UnityEngine;
using UnityEngine.UI;
using TMPro;
using ConvertsDigits;

public class SetShopSlot : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TextMeshProUGUI inStock;
    [SerializeField] private TextMeshProUGUI Prise;
    [SerializeField] private Image iconCurrency;

    [SerializeField] private Button buyButton;
    [SerializeField] private GameObject buyPanelPrefab;
    private Transform canvasTransform;
    public Ingredient ingredient;
    public void SetShopSlotInfo(Ingredient ingredient)
    {
        this.ingredient = ingredient;
        icon.sprite = ingredient.Data.Icon;
        Prise.text = Converter.FormatNum(ingredient.Data.Prise);

        buyButton.onClick.AddListener(CreateBuyPanel);
        ingredient.onChange += UndateStockInfo;
    }
    private void OnEnable()
    {
        UndateStockInfo();
    }

    private void UndateStockInfo()
    {
        inStock.text = Converter.FormatNum(ingredient.Ammount);
    }

    public void DisableItem()
    {
        this.gameObject.SetActive(false);
    }
    public void EnableItem()
    {
        this.gameObject.SetActive(true);
    }
    void CreateBuyPanel()
    {
        canvasTransform = GameObject.FindObjectOfType<Canvas>().transform;
        var gm = Instantiate(buyPanelPrefab, canvasTransform);
        var setBuyPanel = gm.GetComponent<SetBuyPanelInfo>();
        setBuyPanel.SetShopSlotInfo(ingredient);
    }
}
