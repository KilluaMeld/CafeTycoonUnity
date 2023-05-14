using System;

public class Recipe
{
    Action onChange;

    public RecipeInfo Data;
    public bool IsHas;
    public float Prise;

    PlayerPrefsSaver playerPrefsSaver = new PlayerPrefsSaver();

    public Recipe(RecipeInfo _data)
    {
        Data = _data;
        playerPrefsSaver.Load<Recipe>(_data.Key, LoadData);

        onChange += SaveData;
    }
    void LoadData(Recipe save)
    {
        save.IsHas = IsHas;
        save.Prise = Prise;
    }
    void SaveData()
    {
        playerPrefsSaver.Save(Data.Key, this);
    }

    public void LearnRecipe() { 
        IsHas = true;

        onChange?.Invoke();
    }
    public void ChangePrise(float value)
    {
        Prise += value;
        if (Prise <=1)
            Prise = 1;

        onChange?.Invoke();
    }
}
