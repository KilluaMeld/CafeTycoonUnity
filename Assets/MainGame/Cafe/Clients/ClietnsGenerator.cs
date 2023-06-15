using UnityEngine;

public class ClietnsGenerator : MonoBehaviour
{
    [SerializeField] private ClientInfo[] clientInfos;
    [SerializeField] private float _tickForNewClient;
    private float _currentTicks;
    private CafeActivity cafeActivity;

    [SerializeField] private int _numberOfSeatsInTheCafe;
    [SerializeField] private GameObject _clientIControlPrefab;
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
        var clI = Instantiate(_clientIControlPrefab, _canvasTransform).GetComponent<ClientControl>();
        clI.SetClientInfo(clientInfos[Random.Range(0, clientInfos.Length)]);

    }

    public void ReturnSeat()
    {
        _numberOfSeatsInTheCafe++;
    }

}
