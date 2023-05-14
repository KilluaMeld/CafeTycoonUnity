using System;

public class Ingredient
{
    Action onChange;

    public IngredientInfo Data;
    public int Ammount;

    PlayerPrefsSaver playerPrefsSaver = new PlayerPrefsSaver();

    public Ingredient(IngredientInfo _data)
    {
        Data = _data;
        playerPrefsSaver.Load<Ingredient>(_data.Key, LoadData);

        onChange += SaveData;
    }
    void LoadData(Ingredient save)
    {
        save.Ammount = Ammount;
    }
    void SaveData()
    {
        playerPrefsSaver.Save(Data.Key, this);
    }

    public void PlusAmmount(int value)
    {
        Ammount += value;
        onChange?.Invoke();
    }
    public void MinusAmmount(int value)
    {
        if (Ammount >= value)
            Ammount -= value;

        onChange?.Invoke();
    }
}
