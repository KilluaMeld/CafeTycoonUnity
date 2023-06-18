using UnityEngine;
using UnityEngine.UI;

public class ClientTimerView : MonoBehaviour
{
    [SerializeField] private Image fillLine;

    public void UpdateLineView(float allTicks, float currentTicks)
    {
        fillLine.fillAmount = (allTicks-currentTicks) / allTicks;
    }
}
