using System;
using UnityEngine;
using UnityEngine.UI;

public class ActiveButton : MonoBehaviour
{
    public Action<Image> onClickButton;
    private Image img;
    private void Awake()
    {
        img = GetComponent<Image>();
        GetComponent<Button>().onClick.AddListener(() => onClickButton?.Invoke(img));
    }
    public void SetColorButton(Color32 color)
    {
        img.color = color;
    }
}
