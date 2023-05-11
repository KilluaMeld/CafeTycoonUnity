using System;
using System.Collections;
using UnityEngine;

public class CafeActivity : MonoBehaviour
{
    [SerializeField] public float TimeCafeActivityScaler;

    [SerializeField] private float _timeForCafeTick;
    [SerializeField] private float _currentTime;

    public Action onCafeActivityTick;
    private void Start()
    {
        StartCoroutine(CreateNewClients());
    }

    private IEnumerator CreateNewClients()
    {
        while (true)
        {
            yield return new WaitForSecondsRealtime(1* TimeCafeActivityScaler);
            _currentTime += 1;
            if (_currentTime >= _timeForCafeTick)
            {
                _currentTime = 0;

                onCafeActivityTick?.Invoke();
            }
        }
    }


}
