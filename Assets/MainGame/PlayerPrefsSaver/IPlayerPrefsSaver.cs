using System;

interface IPlayerPrefsSaver
{
    void Save(string key, object data, Action callback);
    void Load<T>(string key, Action<T> callback);
}
