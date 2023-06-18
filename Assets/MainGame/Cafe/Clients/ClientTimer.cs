using System;
using UnityEngine;

public class ClientTimer
{
    public Action onEndTimer;
    public Action<float,float> onTickTimerEvent;
    

    float _tickForCancelOrder;
    private float _currentTicks;
    public ClientTimer(float tickForCancelOrder)
    {

        _tickForCancelOrder = tickForCancelOrder;
        GameObject.FindObjectOfType<CafeActivity>().onCafeActivityTick += TryGenerateClient;
    }
    public void DisabeTimer()
    {
        GameObject.FindObjectOfType<CafeActivity>().onCafeActivityTick -= TryGenerateClient;
    }

    void TryGenerateClient()
    {
        _currentTicks += 1;
        onTickTimerEvent.Invoke(_tickForCancelOrder, _currentTicks);
        if (_currentTicks >= _tickForCancelOrder)
        {
            onEndTimer?.Invoke();
        }
    }
}
