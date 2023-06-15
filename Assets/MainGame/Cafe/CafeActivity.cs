using System;
using System.Collections;
using UnityEngine;

public class CafeActivity : MonoBehaviour
{
    public float TimeCafeActivityScaler;

    [SerializeField] private float _timeForCafeTick;
    [SerializeField] private float _currentTime;
    public Action onCafeActivityTick;
    private void Awake()
    {
        StartCoroutine(CreateNewClients());
    }

    private IEnumerator CreateNewClients()
    {
        while (true)
        {
            if (TimeCafeActivityScaler == 0)
            {
                yield return new WaitForSecondsRealtime(1);
                continue;
            }
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
