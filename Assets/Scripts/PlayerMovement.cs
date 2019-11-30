using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : GridMovement
{
    // Start is called before the first frame update
    void Start()
    {
        Init();
    }

    // Update is called once per frame
    void Update()
    {
        Debug.DrawRay(transform.position, transform.forward);
        RaycastHit hit;
        Tile tile = null;
        if (Physics.Raycast(transform.position, -Vector3.up, out hit, 1))
        {
            tile = hit.collider.GetComponent<Tile>();
            if (tile != null)
            {
                tile.occupied = true;
            }
            
        }
        if (!turn)
        {
            return;
        }
        if (!moving)
        {
            FindSelectableTiles();
            CheckMouse();
        }
        else
        {
            if (tile != null)
            {
                tile.occupied = false;
            }
            
            Move();
        }
    }

    void CheckMouse()
    {
        if (Input.GetMouseButtonUp(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;
            
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider.tag == "Tile")
                {
                    Tile t = hit.collider.GetComponent<Tile>();

                    if (t.selectable)
                    {
                        //move target

                        MovetoTile(t);
                    }
                }
            }
        }
    }
    // Called by GazeGestureManager when the user performs a Select gesture
    void OnSelect()
    {
        // If the sphere has no Rigidbody component, add one to enable physics.
        /*if (!this.GetComponent<Rigidbody>())
        {
            var rigidbody = this.gameObject.AddComponent<Rigidbody>();
            rigidbody.collisionDetectionMode = CollisionDetectionMode.Continuous;
        }*/
        //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        var headPosition = Camera.main.transform.position;
        var gazeDirection = Camera.main.transform.forward;
        if (Physics.Raycast(headPosition, gazeDirection, out hit))
        {
            if (hit.collider.tag == "Tile")
            {
                Tile t = hit.collider.GetComponent<Tile>();

                if (t.selectable)
                {
                    //move target

                    MovetoTile(t);
                }
            }
        }
    }
}
