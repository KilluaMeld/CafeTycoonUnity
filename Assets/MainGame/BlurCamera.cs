using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class BlurCamera : MonoBehaviour
{
    [SerializeField] private Camera blurCamera;
    [SerializeField] private Material blurMaterial;
    
    void Start()
    {
        if (blurCamera.targetTexture != null)
        {
            blurCamera.targetTexture.Release();
        }
        blurCamera.targetTexture = new RenderTexture(Screen.width, Screen.height, 24, RenderTextureFormat.ARGB32, 1);
        blurMaterial.SetTexture("_RenTex", blurCamera.targetTexture);
    }
}
