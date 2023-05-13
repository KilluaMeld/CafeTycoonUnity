using System;

public class CoinsRepository : Repository
{
    public const string KEY = "CoinsRep";
    public float Coins { get; set; }
    private PlayerPrefsSaver _prefsSaver = new PlayerPrefsSaver();

    public CoinsRepository()
    {
        _prefsSaver.Load<Currency>(KEY, Initialize);
    }

    public override void Initialize(Currency currency)
    {
        if (currency == null)
            return;
        Coins = currency.value;
    }
    public override void Save()
    {
        Currency currency = new Currency();
        currency.value = Coins;
        _prefsSaver.Save(KEY, currency);
    }
    
}

[Serializable]
public class Currency
{
    public float value;
}
