using UnityEngine;

public class ClietnsGenerator : MonoBehaviour
{
    [SerializeField] private float _tickForNewClient;
    private float _currentTicks;
    private CafeActivity cafeActivity;

    [SerializeField] private int _numberOfSeatsInTheCafe;
    [SerializeField] private GameObject _clientIconPrefab;
    private Transform _canvasTransform;

    private void Start()
    {
        _canvasTransform = GameObject.FindGameObjectWithTag("UICanvas").GetComponent<Transform>();
        cafeActivity = GameObject.FindObjectOfType<CafeActivity>();
        cafeActivity.onCafeActivityTick += TryGenerateClient;
    }
    void TryGenerateClient()
    {
        _currentTicks += 1;
        if (_currentTicks >= _tickForNewClient)
        {
            _currentTicks = 0;

            GenerateClient();

        }
    }



    private void GenerateClient()
    {
        if (_numberOfSeatsInTheCafe <= 0)
            return;

        _numberOfSeatsInTheCafe--;
        Instantiate(_clientIconPrefab, _canvasTransform);

    }

    public void ReturnSeat()
    {
        _numberOfSeatsInTheCafe++;
    }

}
