using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonGroup : MonoBehaviour
{
    [SerializeField] private ActiveButton[] listButtons;
    [SerializeField] private Color32 inactiveButton;
    [SerializeField] private Color32 activeButton;

    private void Start()
    {
        foreach (var button in listButtons)
        {
            button.onClickButton += SwitchActiveButton;
        }
    }
    private void OnEnable()
    {
        listButtons[0].gameObject.GetComponent<Button>().onClick?.Invoke();
    }
    void SwitchActiveButton(Image image)
    {
        foreach(var button in listButtons)
        {
            button.SetColorButton(inactiveButton);
        }
        image.color = activeButton;
    }
}
