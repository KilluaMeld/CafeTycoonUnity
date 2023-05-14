using UnityEngine;

[CreateAssetMenu(fileName = "New RecipeInfo", menuName = "Item/RecipeInfo")]
public class RecipeInfo : ScriptableObject
{
    [SerializeField] private string key;
    [SerializeField] private int category;
    [SerializeField] private Sprite icon;
    [SerializeField] private IngredientInfo[] ingredients;
    [SerializeField] private int level;

    public string Key { get { return key; } }
    public int Category { get { return category; } }
    public Sprite Icon { get { return icon; } }
    public IngredientInfo[] Ingredients { get { return ingredients; } }
    public float Level { get { return level; } }

}
