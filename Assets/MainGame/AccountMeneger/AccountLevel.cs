using System;
using UnityEngine;

public class AccountLevel : MonoBehaviour {

    public Action<int, float> onNewLevel;
    public Action<int, float> onExpUpdate;
    [SerializeField] private float _expToNewLevel;
    LevelRepository levelRepository;
    private void Awake()
    {
        levelRepository = new LevelRepository();
        onExpUpdate?.Invoke(levelRepository.Level, levelRepository.Exp);
    }
    public int GetLevelValue()
    {
        return levelRepository.Level;
    }
    public float GetExpValue()
    {
        return levelRepository.Exp;
    }
    public void AddExp(float exp, int level = 0)
    {
        levelRepository.Exp += exp;
        if (level > 0)
        {
            levelRepository.Level += level;
            onNewLevel?.Invoke(levelRepository.Level, levelRepository.Exp);
        }
        if (levelRepository.Exp >= _expToNewLevel)
        {
            levelRepository.Exp -= _expToNewLevel;
            levelRepository.Level++;
            onNewLevel?.Invoke(levelRepository.Level, levelRepository.Exp);
        }
        onExpUpdate?.Invoke(levelRepository.Level, levelRepository.Exp);
        levelRepository.Save();
    }
}
