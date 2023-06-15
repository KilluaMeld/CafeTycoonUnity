public class RubyRepository : Repository
{
    public const string KEY = "RubyRep";
    public float Ruby { get; set; }
    private PlayerPrefsSaver _prefsSaver = new PlayerPrefsSaver();

    public RubyRepository()
    {
        _prefsSaver.Load<Currency>(KEY, Initialize);
    }

    public override void Initialize(Currency currency)
    {
        if (currency == null)
            return;
        Ruby = currency.value;
    }

    public override void Save()
    {
        Currency currency = new Currency();
        currency.value = Ruby;
        _prefsSaver.Save(KEY, currency);
    }
    
}
