using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SetOrderPosition : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TextMeshProUGUI nameText;
    [SerializeField] private IngredientInfo[] itemsInfoIngedients;
    [SerializeField] private SetIngredientPosition _ingedientsPrefab;
    [SerializeField] private Transform _ingedientsTransform;


    public int catergory;
    public Recipe recipe;
    public void SetItemInfo(Recipe recipe)
    {
        this.recipe = recipe;
        icon.sprite = recipe.Data.Icon;
        //name.text = Localization.Instance.GetLocalizationFromKey(item.Key);
        nameText.text = recipe.Data.Key;
        itemsInfoIngedients = recipe.Data.Ingredients;

        SetIngredientsList();
    }
    private void SetIngredientsList()
    {

        foreach (var item in itemsInfoIngedients)
        {
            var gm = Instantiate(_ingedientsPrefab, _ingedientsTransform);
            gm.SetIngredientInfo(GameObject.FindObjectOfType<LoadIngredientsList>().GetIngredient(item.Key));
        }
    }
}
