using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CreateNewAccount : MonoBehaviour
{
    [SerializeField] private GameObject _newNicknamePanel;
    [SerializeField] private TextMeshProUGUI nicknameTextInput;
    [SerializeField] private GameObject _newIconPanel;
    [SerializeField] private string nickname;
    [SerializeField] private int iconId;
    [SerializeField] private TextMeshProUGUI nicknameIconPanel;
    [SerializeField] private Image iconInIconPanel;


    [SerializeField] private Button _confirm;

    private AccountInfo acccountInfo;
    private void Start()
    {
        acccountInfo = GameObject.FindFirstObjectByType<AccountInfo>();

        _confirm.onClick.AddListener(SetNickName);
    }

    private void SetNickName()
    {
        if (acccountInfo == null)
            return;

        if (nicknameTextInput.text == null && nicknameTextInput.text.Length < 3)
            return;



        _newNicknamePanel.SetActive(false);

        nickname = nicknameTextInput.text;
        nicknameIconPanel.text = nickname;

        _newIconPanel.SetActive(true);
        Debug.Log("New nickname accepted");
    }
    public void SetIcon(int iconID)
    {
        this.iconId = iconID;
        iconInIconPanel.sprite = acccountInfo._iconsList[iconID];
    }
    public void ConfirmRegistration()
    {
        acccountInfo.SetNewAccountInfo(nickname, iconId);
        Destroy(this.gameObject);
    }
}
