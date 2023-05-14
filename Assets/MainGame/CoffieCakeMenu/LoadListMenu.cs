using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class LoadListMenu : MonoBehaviour
{
    [SerializeField] List<SetMenuPosition> listNenuPositions = new List<SetMenuPosition>();
    [SerializeField] GameObject menuPositionPrefab;
    [SerializeField] Transform menuTransform;

    void Start()
    {
        foreach (var item in GameObject.FindObjectOfType<LoadRecipeList>().GetAllRecipes())
        {
            var gm = GameObject.Instantiate(menuPositionPrefab, menuTransform).GetComponent<SetMenuPosition>();
            listNenuPositions.Add(gm);
            gm.SetItemInfo(item);
            gm.DisableItem();
        }
        EnableWithCategory();
    }

    public void EnableWithCategory(int category = 0)
    {
        foreach (var item in listNenuPositions)
        {
            item.DisableItem();
        }
        var sm = listNenuPositions.FindAll(cat => cat.recipe.Data.Category == category);
        foreach (var item in sm)
        {
            item.EnableItem();
        }
    }

    
}
