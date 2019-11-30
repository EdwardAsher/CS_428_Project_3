using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    public bool occupied = false;
    public bool walkable = true;
    public bool currentTile = false;
    public bool target = false;
    public bool selectable = false;
    public float neighborDistance = 0.125f;

    public List<Tile> adjacencyList = new List<Tile>();

    public bool visited = false;
    public Tile parent = null;
    public int distance = 0;

    //public GameObject cube;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (currentTile)
        {
            GetComponent<Renderer>().material.color = Color.magenta;
        }
        else if (target)
        {
            GetComponent<Renderer>().material.color = Color.green;
        }
        else if (selectable)
        {
            GetComponent<Renderer>().material.color = Color.red;
        }
        else
        {
            GetComponent<Renderer>().material.color = Color.white;
        }
    }

    public void Reset()
    {
        /*if (currentTile == true)
        {
            walkable = true;
            currentTile = true;
            target = false;
            selectable = false;

            visited = false;
            parent = null;
            distance = 0;
        }
        else
        {*/
            walkable = true;
            currentTile = false;
            target = false;
            selectable = false;

            visited = false;
            parent = null;
            distance = 0;
        //}
       
    }

    public void FindNeighbors(float jumpHeight)
    {
        Reset();
        Vector3 temp = new Vector3();
        temp.z = 0.1f;
        CheckTile(temp, jumpHeight);
        CheckTile(-temp, jumpHeight);
        temp.z = 0;
        temp.x = 0.1f;
        CheckTile(temp, jumpHeight);
        CheckTile(-temp, jumpHeight);
    }

    public void CheckTile(Vector3 direction, float jumpHeight)
    {
        Vector3 halfExtents = new Vector3(0.1f, (0.1f+jumpHeight/4.0f), 0.1f);
        //Debug.DrawRay(transform.position, direction, Color.white);
        Collider[] colliders = Physics.OverlapBox(transform.position + direction, halfExtents);

        foreach (Collider item in colliders)
        {
            Tile tile = item.GetComponent<Tile>();
            if (tile != null && tile.walkable)
            {
                RaycastHit hit;

                //Check if something above
                Vector3 temp = new Vector3();
                temp = Vector3.up;
                temp.y = 0.3f;
                var hitCheck = Physics.Raycast(tile.transform.position, temp, out hit, 1);
                Color color = hitCheck ? Color.green : Color.red;
                Debug.DrawRay(transform.position, temp, color);
                if (Physics.Raycast(tile.transform.position, temp, out hit, 1))
                {
                    //Debug.Log(hit.collider.gameObject.name);
                }
                if (tile.occupied == false)
                {
                    //Debug.Log(hit.collider.gameObject.name);
                    if (tile.occupied)
                    {
                        Debug.Log("OCCUPIED");
                    }
                    adjacencyList.Add(tile);
                }
            }
        }

    }

    void Test2()
    {
        /*if (cube.activeSelf == true)
        {
            cube.SetActive(false);
        }
        else
        {
            cube.SetActive(true);
        }*/
        SendMessageUpwards("OnSelect", this, SendMessageOptions.DontRequireReceiver);
    }
}
