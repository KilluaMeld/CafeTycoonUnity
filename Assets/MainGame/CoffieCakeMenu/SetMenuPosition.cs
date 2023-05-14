using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SetMenuPosition : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TextMeshProUGUI nameText;
    [SerializeField] private IngredientInfo[] itemsInfoIngedients;
    [SerializeField] private GameObject _ingedientsPrefab;
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
            GameObject gm = Instantiate(_ingedientsPrefab, _ingedientsTransform);
            SetIngredientPosition ingr = gm.GetComponent<SetIngredientPosition>();
            ingr.SetIngredientInfo(GameObject.FindObjectOfType<LoadIngredientsList>().GetIngredient(item.Key));
        }
        

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
