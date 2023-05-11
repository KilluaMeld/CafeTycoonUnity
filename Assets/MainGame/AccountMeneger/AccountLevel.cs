using System;

public class AccountLevel
{
    public Action<int,float> onNewLevel;
    public Action<int,float> onExpUpdate;

    private int _level;
    public int Level { get { return _level; } }
    private float _expToNewLevel = 1000;
    private float _exp;
    public float Exp { get { return _exp; } }

    public void LoadLevel(int level,float exp)
    {
        this._level = level;
        this._exp = exp;
        onExpUpdate?.Invoke(_level, _exp);
    }
    public void AddExp(float exp, int level = 0)
    {
        _exp += exp;
        if (level > 0)
        {
            _level+=level;
            onNewLevel?.Invoke(_level,_exp);
        }
        if (_expToNewLevel<=_exp)
        {
            _exp -= _expToNewLevel;
            _level++;
            onNewLevel?.Invoke(_level, _exp);
        }
        onExpUpdate?.Invoke(_level, _exp);
    }
}
