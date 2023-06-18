using UnityEngine;
using UnityEditor;

public class AroundXY : MonoBehaviour
{
    /*[SerializeField] Vector2Int _size = Vector2Int.one;
    AroundXY()
    {
        EditorApplication.update += OnEditorUpdate;
    }
    
    void OnEditorUpdate()
    {
        if(this == null)
        {
            EditorApplication.update -= OnEditorUpdate;
            return;
        }
        var x = Mathf.RoundToInt(transform.position.x);
        var z = Mathf.RoundToInt(transform.position.z);

        transform.position = new Vector3(x, 0, z);
    }
    private void OnDrawGizmos()
    {
        for (int x = 0; x < _size.x; x++)
        {
            for (int y = 0; y < _size.y; y++)
            {
                Gizmos.color = new Color32(72, 168, 50, 255);
                Gizmos.DrawCube(transform.position + new Vector3(x, 0, y), new Vector3(1, 1, 1));
            }
        }
    }*/
}
