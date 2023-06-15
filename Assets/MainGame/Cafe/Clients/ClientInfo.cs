using UnityEngine;
[CreateAssetMenu(fileName = "New ClientInfo", menuName = "Client/ClientInfo")]
public class ClientInfo : ScriptableObject
{
    [SerializeField] private string _name;
    [SerializeField] private int _timerSeconds;
    [SerializeField] private Sprite _icon;

    public string Name { get { return name; } }
    public int TimerSeconds { get { return _timerSeconds; } }
    public Sprite Icon { get { return _icon; } }

}
