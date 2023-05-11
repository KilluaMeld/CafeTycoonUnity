using UnityEngine;
using UnityEngine.UI;

public class ClientControl : MonoBehaviour
{
    [SerializeField] GameObject _iconPrefab;
    [SerializeField] Transform _questTransform;
    [SerializeField] GameObject _orderMenuPrefab;
    [SerializeField] Transform _canvasTransform; 
    private GameObject iconOrder;
    private GameObject menuOrder;

    private void Start()
    {
        _questTransform = GameObject.FindGameObjectWithTag("UIQuestsPanel").GetComponent<Transform>();
        _canvasTransform = GameObject.FindGameObjectWithTag("UICanvas").GetComponent<Transform>();

        GenerateOrder();

        iconOrder = Instantiate(_iconPrefab, _questTransform);
        iconOrder.GetComponent<Button>().onClick.AddListener(OpenOrderMenu);
        iconOrder.GetComponent<ClientTimer>().onEndTimer += CancelOrder;

        menuOrder = Instantiate(_orderMenuPrefab, _canvasTransform) as GameObject;
        menuOrder.SetActive(false);
        menuOrder.GetComponent<ClientOrderMenu>().onAccept += SuccessfulOrder;
        menuOrder.GetComponent<ClientOrderMenu>().onCancel += CancelOrder;
    }

    private void SuccessfulOrder()
    {
        CancelAllActions();
        GameObject.FindObjectOfType<ClietnsGenerator>().ReturnSeat();
        DestroyClient();
    }



    private void CancelOrder()
    {
        CancelAllActions();
        GameObject.FindObjectOfType<ClietnsGenerator>().ReturnSeat();
        DestroyClient();
    }
    private void OpenOrderMenu()
    {
        menuOrder.SetActive(true);
    }
    private void DestroyClient()
    {
        Destroy(iconOrder);
        Destroy(menuOrder);
        Destroy(this.gameObject);
    }

    private void CancelAllActions()
    {
        iconOrder.GetComponent<ClientTimer>().onEndTimer -= CancelOrder;
        menuOrder.GetComponent<ClientOrderMenu>().onAccept -= SuccessfulOrder;
        menuOrder.GetComponent<ClientOrderMenu>().onCancel -= CancelOrder;
    }
    void GenerateOrder()
    {

    }
}
