using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SetMenuPosition : MonoBehaviour
{
    [SerializeField] private Image icon;
    [SerializeField] private TextMeshProUGUI name;
    [SerializeField] private TextMeshProUGUI cost;
    [SerializeField] private ItemInfo[] itemsInfo;


    public int catergory;
    public Item item;
    public void SetItemInfo(Item item)
    {
        this.item = item;
        icon.sprite = item.Data.Icon;
        //name.text = Localization.Instance.GetLocalizationFromKey(item.Key);
        name.text = item.Data.Key;
        cost.text = item.Data.Cost.ToString();
        itemsInfo = item.Data.Ingredients;
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
