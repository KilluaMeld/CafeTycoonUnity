using System;
using UnityEngine;

public class ClientTimer
{
    public Action onEndTimer;

    float _tickForCancelOrder;
    private float _currentTicks;
    public ClientTimer(float tickForCancelOrder)
    {

        _tickForCancelOrder = tickForCancelOrder;
        GameObject.FindObjectOfType<CafeActivity>().onCafeActivityTick += TryGenerateClient;
    }
    void TryGenerateClient()
    {
        _currentTicks += 1;
        if (_currentTicks >= _tickForCancelOrder)
        {
            onEndTimer?.Invoke();
        }
    }
}
