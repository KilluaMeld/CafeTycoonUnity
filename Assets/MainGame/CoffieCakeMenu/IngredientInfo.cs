using UnityEngine;

[CreateAssetMenu(fileName = "New IngredientInfo", menuName = "Item/IngredientInfo")]
public class IngredientInfo : ScriptableObject
{
    [SerializeField] private string key;
    [SerializeField] private int category;
    [SerializeField] private Sprite icon;
    [SerializeField] private float prise;
    [SerializeField] private int currency;
    [SerializeField] private int level;

    public string Key { get { return key; } }
    public int Category { get { return category; } }
    public Sprite Icon { get { return icon; } }
    public float Prise { get { return prise; } }
    public float Currency { get { return currency; } }
    public float Level { get { return level; } }

}