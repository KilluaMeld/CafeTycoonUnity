using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadListMenu : MonoBehaviour
{
    [SerializeField] ItemInfo[] itemsInfo;
    [SerializeField] List<Item> listItems = new List<Item>();
    [SerializeField] List<SetMenuPosition> listNenuPositions = new List<SetMenuPosition>();
    [SerializeField] GameObject menuPositionPrefab;
    [SerializeField] Transform menuTransform;

    void Start()
    {
        foreach (var item in itemsInfo)
        {
            var inList = false;
            for (int i = 0; i < listItems.Count; i++)
            {
                if (listItems[i].Data.Key == item.Key)
                {
                    inList = true;
                    break;
                }
            }

            if (!inList)
            {
                var newItem = new Item(item);
                listItems.Add(newItem);
            }
        }

        foreach (var item in listItems)
        {
            var gm = GameObject.Instantiate(menuPositionPrefab, menuTransform).GetComponent<SetMenuPosition>();
            listNenuPositions.Add(gm);
            gm.SetItemInfo(item);
            gm.DisableItem();
        }
    }

    public void EnableWithCategory(int category)
    {
        foreach (var item in listNenuPositions)
        {
            item.DisableItem();
        }
        var sm = listNenuPositions.FindAll(cat => cat.item.Data.Category == category);
        foreach (var item in sm)
        {
            item.EnableItem();
        }
    }

    
}
