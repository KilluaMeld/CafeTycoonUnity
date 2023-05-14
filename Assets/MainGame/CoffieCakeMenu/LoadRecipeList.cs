using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadRecipeList : MonoBehaviour
{

    [SerializeField] RecipeInfo[] recipeInfoList;
    [SerializeField] List<Recipe> recipeList = new List<Recipe>();

    private void Awake()
    {
        foreach (var item in recipeInfoList)
        {
            var inList = false;
            for (int i = 0; i < recipeList.Count; i++)
            {
                if (recipeList[i].Data.Key == item.Key)
                {
                    inList = true;
                    break;
                }
            }

            if (!inList)
            {
                var newItem = new Recipe(item);
                recipeList.Add(newItem);
            }
        }
    }

    public Recipe GetRecipe(string key)
    {
        return recipeList.Find(item => item.Data.Key == key);
    }
    public List<Recipe> GetAllRecipes()
    {
        return recipeList;
    }
}
