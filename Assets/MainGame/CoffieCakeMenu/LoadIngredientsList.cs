using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadIngredientsList : MonoBehaviour
{
    [SerializeField] IngredientInfo[] ingredientInfoList;
    [SerializeField] List<Ingredient> ingredientList = new List<Ingredient>();
    private void Awake()
    {
        foreach (var item in ingredientInfoList)
        {
            var inList = false;
            for (int i = 0; i < ingredientList.Count; i++)
            {
                if (ingredientList[i].Data.Key == item.Key)
                {
                    inList = true;
                    break;
                }
            }

            if (!inList)
            {
                var newItem = new Ingredient(item);
                ingredientList.Add(newItem);
            }
        }
    }
    
    public Ingredient GetIngredient(string key)
    {
        return ingredientList.Find(item => item.Data.Key == key);
    }
    public List<Ingredient> GetAllIngredients()
    {
        return ingredientList;
    }
}
