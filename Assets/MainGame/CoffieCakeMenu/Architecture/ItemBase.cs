using UnityEngine;
public interface ItemBase
{
    public string key { get;}
    public Sprite Icon { get;}
    public string Name { get;}
    //string Description { get; set; }
    public ItemBase[] Ingredients { get; set; }
    public float Cost { get; }
    public bool IsHas { get; set; }
    public float Prise { get; set; }
}
