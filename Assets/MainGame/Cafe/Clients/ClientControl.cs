using UnityEngine;
using UnityEngine.UI;

public class ClientControl : MonoBehaviour
{
    [SerializeField] GameObject _iconPrefab;
    [SerializeField] Transform _questTransform;
    [SerializeField] ClientOrderMenu _orderMenuPrefab;
    [SerializeField] Transform _canvasTransform;
    private GameObject iconOrder;
    [SerializeField] private ClientOrderMenu menuOrder;
    ClientTimer clientTimer;
    public void SetClientInfo(ClientInfo clientInfo)
    {
        clientTimer = new ClientTimer(clientInfo.TimerSeconds);
        _questTransform = GameObject.FindGameObjectWithTag("UIQuestsPanel").GetComponent<Transform>();
        _canvasTransform = GameObject.FindGameObjectWithTag("UICanvas").GetComponent<Transform>();


        iconOrder = Instantiate(_iconPrefab, _questTransform);
        iconOrder.GetComponent<Button>().onClick.AddListener(OpenOrderMenu);
        iconOrder.GetComponent<Image>().sprite = clientInfo.Icon;
        clientTimer.onEndTimer += CancelOrder;
        clientTimer.onTickTimerEvent += iconOrder.GetComponent<ClientTimerView>().UpdateLineView;

        menuOrder = Instantiate(_orderMenuPrefab, _canvasTransform);
        menuOrder.gameObject.SetActive(false);
        menuOrder.SetClientInfo(clientInfo);
        menuOrder.onAccept += SuccessfulOrder;
        menuOrder.onCancel += CancelOrder;


        GenerateOrder();
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
        menuOrder.gameObject.SetActive(true);
    }
    private void DestroyClient()
    {
        clientTimer.DisabeTimer();
        clientTimer.onTickTimerEvent -= iconOrder.GetComponent<ClientTimerView>().UpdateLineView;
        Destroy(iconOrder);
        Destroy(menuOrder);
        Destroy(this.gameObject);
    }

    private void CancelAllActions()
    {
        clientTimer.onEndTimer -= CancelOrder;
        menuOrder.onAccept -= SuccessfulOrder;
        menuOrder.onCancel -= CancelOrder;
    }
    void GenerateOrder()
    {
        var recipes = GameObject.FindObjectOfType<LoadRecipeList>();
        Debug.Log(recipes);
        var openRecipes = recipes.GetAllOpenRecipes();
        Debug.Log(openRecipes);
        var countPosotionsInOrder = Random.Range(1, 2);
        Debug.Log(countPosotionsInOrder);
        for (int i = 0; i < countPosotionsInOrder; i++)
        {
            Debug.Log(menuOrder.name);
            menuOrder.CreateOrderPosition(openRecipes[Random.Range(0, openRecipes.Count)]);
        }
    }
}
