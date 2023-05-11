using System;
using UnityEngine;
using UnityEngine.UI;

public class ClientOrderMenu : MonoBehaviour
{
    [SerializeField] private Button _backPanel;
    [SerializeField] private Button _backButton;
    [SerializeField] private Button _cancel;
    [SerializeField] private Button _accept;

    public Action onAccept;
    public Action onCancel;

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


}
