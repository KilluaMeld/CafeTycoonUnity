using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadShopItemsList : MonoBehaviour
{
    [SerializeField] List<SetShopSlot> listShopSlots = new List<SetShopSlot>();
    [SerializeField] GameObject shopSlotPrefab;
    [SerializeField] Transform contentTransform;

    void Start()
    {
        foreach (var item in GameObject.FindObjectOfType<LoadIngredientsList>().GetAllIngredients())
        {
            var gm = GameObject.Instantiate(shopSlotPrefab, contentTransform).GetComponent<SetShopSlot>();
            listShopSlots.Add(gm);
            gm.SetShopSlotInfo(item);
            gm.DisableItem();
        }
        EnableWithCategory();
    }
    public void EnableWithCategory(int category = 0)
    {
        foreach (var item in listShopSlots)
        {
            item.DisableItem();
        }
        var sm = listShopSlots.FindAll(cat => cat.ingredient.Data.Category == category);
        foreach (var item in sm)
        {
            item.EnableItem();
        }
    }
}
