using System;

public class Recipe
{
    public Action onChange;

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
        IsHas = save.IsHas;
        Prise = save.Prise;
        onChange?.Invoke();
    }
    void SaveData()
    {
        playerPrefsSaver.Save(Data.Key, this);
    }

    public void LearnRecipe() { 
        IsHas = true;

        onChange?.Invoke();
    }
    public void PlusPrise()
    {
        Prise++;

        onChange?.Invoke();
    }
    public void MinusPrise()
    {
        Prise--;
        if (Prise <= 1)
            Prise = 1;
        onChange?.Invoke();
    }
}
