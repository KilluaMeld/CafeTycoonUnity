using TMPro;
using UnityEngine;
using ConvertsDigits;

public class RubyUI : MonoBehaviour
{
    [SerializeField] private RubyInteractor _interactor;
    [SerializeField] private TextMeshProUGUI _rubyText;

    private void Start()
    {
        _interactor.onChangeRuby += UpdateView;
        UpdateView(_interactor.GetRubyValue());
    }

    private void UpdateView(float ruby)
    {
        _rubyText.text = Converter.FormatNum(ruby);
    }
    private void Update()
    {
        if (Input.GetKey(KeyCode.I))
        {
            _interactor.AddRuby(this,1);
        }
        if (Input.GetKey(KeyCode.B))
        {
            _interactor.SpendRuby(this, 1);
        }
    }
}
