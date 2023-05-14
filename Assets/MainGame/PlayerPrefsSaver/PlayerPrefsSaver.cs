using System;
using UnityEngine;

public class PlayerPrefsSaver : IPlayerPrefsSaver
{
    public void Load<T>(string key, Action<T> callback)
    {
        var data = JsonUtility.FromJson<T>(PlayerPrefs.GetString(key));

        if (data == null)
            return;

        callback?.Invoke(data);
    }

    public void Save(string key, object data, Action callback = null)
    {
        PlayerPrefs.SetString(key, JsonUtility.ToJson(data));
        callback?.Invoke();
    }
}
