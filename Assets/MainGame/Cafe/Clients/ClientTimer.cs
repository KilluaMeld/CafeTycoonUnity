using System;
using UnityEngine;

public class ClientTimer : MonoBehaviour
{
    public Action onEndTimer;

    [SerializeField] private float _tickForCancelOrder;
    private float _currentTicks;
    private CafeActivity cafeActivity;

    private void Start()
    {
        cafeActivity = GameObject.FindObjectOfType<CafeActivity>();
        cafeActivity.onCafeActivityTick += TryGenerateClient;
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
