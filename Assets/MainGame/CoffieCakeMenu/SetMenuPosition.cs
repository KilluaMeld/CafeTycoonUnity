using UnityEngine;
using UnityEngine.UI;
using TMPro;
using ConvertsDigits;

public class SetMenuPosition : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TextMeshProUGUI nameText;
    [SerializeField] private IngredientInfo[] itemsInfoIngedients;
    [SerializeField] private GameObject _ingedientsPrefab;
    [SerializeField] private Transform _ingedientsTransform;

    [SerializeField] private GameObject learnPanel;
    [SerializeField] private Button learnButton;
    [SerializeField] private GameObject prisePanel;
    [SerializeField] private TextMeshProUGUI priceValueText;
    [SerializeField] private Button plusPriseButton;
    [SerializeField] private Button minusPriseButton;

    public int catergory;
    public Recipe recipe;
    public void SetItemInfo(Recipe recipe)
    {
        this.recipe = recipe;
        icon.sprite = recipe.Data.Icon;
        //name.text = Localization.Instance.GetLocalizationFromKey(item.Key);
        nameText.text = recipe.Data.Key;
        itemsInfoIngedients = recipe.Data.Ingredients;

        recipe.onChange += UpdatePriseText;

        learnButton.onClick.AddListener(SetDefoultPrise);
        learnButton.onClick.AddListener(recipe.LearnRecipe);
        plusPriseButton.onClick.AddListener(recipe.PlusPrise);
        minusPriseButton.onClick.AddListener(recipe.MinusPrise);

        SetIngredientsList();
    }

    private void SetDefoultPrise()
    {
        float sum = 0f;
        foreach (var item in itemsInfoIngedients)
        {
            sum += item.Prise;
            Debug.Log(sum);
        }
        recipe.Prise = sum;
    }
    private void OnEnable()
    {
        UpdatePriseText();
    }
    private void SetIngredientsList()
    {

        foreach (var item in itemsInfoIngedients)
        {
            GameObject gm = Instantiate(_ingedientsPrefab, _ingedientsTransform);
            SetIngredientPosition ingr = gm.GetComponent<SetIngredientPosition>();
            ingr.SetIngredientInfo(GameObject.FindObjectOfType<LoadIngredientsList>().GetIngredient(item.Key));
        }
    }
    private void UpdatePriseText()
    {
        if (recipe.IsHas == true)
        {
            learnPanel.SetActive(false);
            prisePanel.SetActive(true);
        }
        else
        {
            learnPanel.SetActive(true);
            prisePanel.SetActive(false);
        }
        priceValueText.text = Converter.FormatNum(recipe.Prise);
    }

    public void DisableItem()
    {
        this.gameObject.SetActive(false);
    }
    public void EnableItem()
    {
        this.gameObject.SetActive(true);
    }
}
