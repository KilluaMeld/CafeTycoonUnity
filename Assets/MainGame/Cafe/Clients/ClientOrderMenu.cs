using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ClientOrderMenu : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _name;
    [SerializeField] private Image _icon;

    [SerializeField] private Transform transformForPositions;
    [SerializeField] private SetOrderPosition orderPrefab;

    [SerializeField] private Button _backPanel;
    [SerializeField] private Button _backButton;
    [SerializeField] private Button _cancel;
    [SerializeField] private Button _accept;

    public Action onAccept;
    public Action onCancel;

    public void SetClientInfo(ClientInfo clientInfo)
    {
        _name.text = clientInfo.Name;
        _icon.sprite = clientInfo.Icon;
    }
    private void Start()
    {
        _cancel.onClick.AddListener(CancelOrder);
        _accept.onClick.AddListener(AcceptOrder);
        _backPanel.onClick.AddListener(CloseMenu);
        _backButton.onClick.AddListener(CloseMenu);
    }
    void AcceptOrder()
    {
        this.gameObject.SetActive(false);   
        onAccept?.Invoke();
    }

    void CancelOrder()
    {
        this.gameObject.SetActive(false);
        onCancel?.Invoke();
    }
    void CloseMenu()
    {
        this.gameObject.SetActive(false);
    }
    public void CreateOrderPosition(Recipe recipe)
    {
        var order = Instantiate(orderPrefab, transformForPositions);
        order.SetItemInfo(recipe);
    }

}
