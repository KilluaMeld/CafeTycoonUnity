using System;

public class LevelRepository
{
    public const string KEY = "LevelRep";
    public int Level { get; set; }
    public float Exp { get; set; }
    private PlayerPrefsSaver _prefsSaver = new PlayerPrefsSaver();

    public LevelRepository()
    {
        _prefsSaver.Load<SaveLevel>(KEY, Initialize);
    }

    public void Initialize(SaveLevel saveLevel)
    {
        if (saveLevel == null)
            return;
        Level = saveLevel.Level;
        Exp = saveLevel.Exp;
    }

    public void Save()
    {
        SaveLevel saveLevel = new SaveLevel();
        saveLevel.Level = Level;
        saveLevel.Exp = Exp;
        _prefsSaver.Save(KEY, saveLevel);
    }

}
[Serializable]
public class SaveLevel
{
    public int Level;
    public float Exp;
}