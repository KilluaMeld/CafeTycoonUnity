using UnityEngine;
using UnityEngine.UI;

public class SetIngredientPosition : MonoBehaviour
{
    [SerializeField] private GameObject _lock;
    [SerializeField] private Image _icon;
    [SerializeField] private GameObject _dark;

    Ingredient item;
    AccountLevel accountLevel;
    public void SetIngredientInfo(Ingredient item)
    {
        this.item = item;
        _icon.sprite = item.Data.Icon;
    }

    private void OnEnable()
    {
        accountLevel = GameObject.FindObjectOfType<AccountLevel>();
        if (item.Data.Level > accountLevel.GetLevelValue())
            _lock.SetActive(true);
        else
            _lock.SetActive(false);
        
        if (item.Ammount < 0)
            _dark.SetActive(true);
        else
            _dark.SetActive(false);



    }
}
