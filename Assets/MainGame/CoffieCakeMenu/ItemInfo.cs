using UnityEngine;

[CreateAssetMenu(fileName ="New ItemInfo", menuName ="Item/ItemInfo")]
public class ItemInfo : ScriptableObject
{
    [SerializeField] private string key;
    [SerializeField] private int category;
    [SerializeField] private Sprite icon;
    [SerializeField] private ItemInfo[] ingredients;
    [SerializeField] private float cost;

    public string Key { get { return key; } }
    public int Category { get { return category; } }
    public Sprite Icon { get { return icon; } }
    public ItemInfo[] Ingredients { get { return ingredients; } }
    public float Cost { get { return cost; } }

}
