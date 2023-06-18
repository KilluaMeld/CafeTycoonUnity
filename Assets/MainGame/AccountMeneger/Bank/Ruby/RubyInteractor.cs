using System;
using UnityEngine;

public class RubyInteractor : MonoBehaviour
{
    public Action<float> onChangeRuby;

    RubyRepository rubyRepository;
    private void Awake()
    {
        rubyRepository = new RubyRepository();
        onChangeRuby?.Invoke(rubyRepository.Ruby);
    }

    public float GetRubyValue()
    {
        return rubyRepository.Ruby;
    }
    public void AddRuby(object sender,float value)
    {
        rubyRepository.Ruby += value;
        rubyRepository.Save();
        onChangeRuby?.Invoke(rubyRepository.Ruby);
    }
    public void SpendRuby(object sender, float value)
    {
        if (rubyRepository.Ruby >= value)
        {
            rubyRepository.Ruby -= value;
            rubyRepository.Save();
            onChangeRuby?.Invoke(rubyRepository.Ruby);
        }
        else
        {
            Debug.Log("enough Ruby");
        }
    }
}
