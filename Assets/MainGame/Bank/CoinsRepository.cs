using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinsRepository : Repository
{
    public const string KEY = "CoinsRep";
    public float Coins { get; set; }

    public override void Initialize()
    {
        Coins = PlayerPrefs.GetFloat(KEY, 0);
    }

    public override void Save()
    {
        PlayerPrefs.SetFloat(KEY, Coins);
    }
}
