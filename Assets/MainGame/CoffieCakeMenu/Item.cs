using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item
{
    public ItemInfo Data;
    public bool IsHas;
    public int Ammount;
    public int Prise;

    public Item(ItemInfo _data)
    {
        Data = _data;
    }

}
