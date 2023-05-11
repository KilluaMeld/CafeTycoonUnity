using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CreateNewAccount : MonoBehaviour
{
    [SerializeField] private GameObject _newNicknamePanel;
    [SerializeField] private TextMeshProUGUI nickname;
    [SerializeField] private GameObject _newIconPanel;
    [SerializeField] private int iconId;

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

        if (nickname.text == null && nickname.text.Length < 3)
            return;

        _newNicknamePanel.SetActive(false);

        acccountInfo.SetNewAccountInfo(nickname.text);
        Debug.Log("New nickname accepted");
    }
}
