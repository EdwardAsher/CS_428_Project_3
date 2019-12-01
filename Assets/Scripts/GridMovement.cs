/*
  Tutorial For Grid movement from https://www.youtube.com/watch?v=cX_KrK8RQ2o
  Modified by Edward Reyes
 */
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridMovement : MonoBehaviour
{
    public bool turn = false;

    List<Tile> selectibleTiles = new List<Tile>();
    GameObject[] tiles;

    Stack<Tile> path = new Stack<Tile>();
    Tile currentTile;

    public bool moving = false;
    public int move = 5;
    public float jumpHeight = 2;
    public float moveSpeed = 2;
    public float jumpVelocity = 4.5f;

    Vector3 velocity = new Vector3();
    Vector3 heading = new Vector3();
    //Vector3 rotation = new Vector3();
    Quaternion rotation = new Quaternion();

    float halfHeight = 0;

    //Change to enumerator
    bool fallingDown = false;
    bool jumpingUp = false;
    bool movingEdge = false;
    Vector3 jumpTarget = new Vector3();

    public GameObject target = null;

    public bool waiting = false;
    public bool decided = false;

    public List<GameObject> enemiesList = new List<GameObject>();

    protected void Init()
    {
        tiles = GameObject.FindGameObjectsWithTag("Tile");

        halfHeight = GetComponent<Collider>().bounds.extents.y;

        TurnManager.AddUnit(this);
    }

    public void GetCurrentTile()
    {
        currentTile = GetTargetTile(gameObject);
        currentTile.currentTile = true;
        //currentTile.occupied = true;
    }

    public Tile GetTargetTile(GameObject target)
    {
        RaycastHit hit;
        Tile tile = null;

        if (Physics.Raycast(target.transform.position, -Vector3.up, out hit, 1))
        {
            tile = hit.collider.GetComponent<Tile>();
        }

        return tile;
    }

    public void ComputeAdjacencyLists()
    {
        //If map changes
        tiles = GameObject.FindGameObjectsWithTag("Tile");

        foreach (GameObject tile in tiles)
        {
            Tile t = tile.GetComponent<Tile>();
            t.FindNeighbors(jumpHeight);
        }
    }

    //Called by PlayerMovement
    public void FindSelectableTiles()
    {
        decided = false;
        ComputeAdjacencyLists();
        GetCurrentTile();

        Queue<Tile> process = new Queue<Tile>();

        process.Enqueue(currentTile);
        currentTile.visited = true;
        //GetCurrentTile.parent = ?? Left as null
        //Debug.Log("In search");
        while (process.Count > 0)
        {
            Tile t = process.Dequeue();
            //Debug.Log("In while");
            selectibleTiles.Add(t);
            t.selectable = true;

            if (t.distance < move)
            {
                foreach (Tile tile in t.adjacencyList)
                {
                    //Debug.Log("In tile");
                    if (!tile.visited && tile.tileOccupant != this.tag)
                    {
                        tile.parent = t;
                        tile.visited = true;
                        tile.distance = 1 + t.distance;
                        process.Enqueue(tile);
                    }
                }
            }
        }
    }

    public bool AttackNearbyTiles()
    {
        //ComputeAdjacencyLists();
        RemoveSelectableTiles();
        GetCurrentTile();
        
        Tile targetTile = GetTargetTile(target);
        Debug.Log(targetTile.name);
        bool targetFound = false;
        
        Queue<Tile> process = new Queue<Tile>();

        process.Enqueue(currentTile);
        currentTile.visited = true;
        //GetCurrentTile.parent = ?? Left as null
        //Debug.Log("In search");
        while (process.Count > 0)
        {
            Tile t = process.Dequeue();
            //Debug.Log("In while");
            //selectibleTiles.Add(t);
            //t.selectable = true;

            if (t.distance < move)
            {
                foreach (Tile tile in t.adjacencyList)
                {
                    //Debug.Log("In tile");
                    
                    if (!tile.visited)
                    {
                        if (tile == targetTile)
                        {
                            targetFound = true;
                            Debug.Log("Target Found");
                            //return true;
                        }
                        tile.parent = t;
                        tile.visited = true;
                        tile.distance = 1 + t.distance;
                        process.Enqueue(tile);
                    }
                }
            }
            
        }
        return targetFound;
    }

    public void MovetoTile (Tile tile)
    {
        path.Clear();
        tile.target = true;
        moving = true;

        Tile next = tile;
        while (next != null)
        {
            path.Push(next);
            next = next.parent;
        }
    }

    public void Move()
    {
        int pathSize = 0;
        Debug.Log(path.Count);
        if (target != null)
        {
            pathSize = path.Count - 1;
        }
        else
        {
            pathSize = path.Count;
        }
        if (pathSize > 0)
        {
            Tile t = path.Peek();
            Vector3 target = t.transform.position;
            Debug.Log(this.gameObject.transform.localRotation);
            target.y += halfHeight + t.GetComponent<Collider>().bounds.extents.y;
            //Debug.Log(Vector3.Distance(transform.position, target));
            //Debug.Log("Target: " + target);
            //Debug.Log("Transform: " + transform.position);

            if (Vector3.Distance(transform.position, target) >= 0.1f)
            {
                bool jump = transform.position.y != target.y;

                if (jump)
                {
                    Debug.Log("Jump!");
                    Jump(target);
                }
                //else
                {
                    CalculateHeading(target);
                    SetHorizontalVelocity();
                }

                //Add anim here
                transform.forward = heading;
                transform.position += velocity * Time.deltaTime;
                //rotation = transform.rotation;
                Debug.Log(rotation);
            }
            else
            {
                transform.position = target;
                path.Pop();
                //transform.rotation = rotation;
            }

        }
        else
        {
            /*transform.eulerAngles = new Vector3(
            transform.eulerAngles.x,
            transform.eulerAngles.y + 180,
            transform.eulerAngles.z
);*/
            RemoveSelectableTiles();
            moving = false;

            //Add actions
            if (target != null)
            {
                Attack(target);
                StartCoroutine("EndActions");
            }
            else if (target == null)
            {
                StartCoroutine("ExtraActions");
            }


        }
    }

    IEnumerator EndActions()
    {
        //Debug.Log("Testing");
        //waiting = true;
        //yield return new WaitUntil(() => Input.GetKeyDown(KeyCode.Space));
        //yield return new WaitUntil(() => decided);
        //yield return new WaitForSeconds(5f);
        //waiting = false;
        yield return null;
        TurnManager.EndTurn();

    }

    IEnumerator ExtraActions()
    {
        Debug.Log("Testing");
        waiting = true;
        //yield return new WaitUntil(() => Input.GetKeyDown(KeyCode.Space));
        yield return new WaitUntil(() => decided);
        //yield return new WaitForSeconds(5f);
        waiting = false;
        TurnManager.EndTurn();

    }


    protected void RemoveSelectableTiles()
    {
        if (currentTile != null)
        {
            currentTile.currentTile = false;
            //currentTile.occupied = false;
            currentTile = null;
        }
        foreach(Tile tile in selectibleTiles)
        {
            tile.Reset();
        }

        selectibleTiles.Clear();
    }

    void CalculateHeading(Vector3 target)
    {
        heading = target - transform.position;
        heading.Normalize();
    }
    
    void SetHorizontalVelocity()
    {
        velocity = heading * moveSpeed;
    }

    void Jump(Vector3 target)
    {
        if (fallingDown)
        {
            FallDownward(target);
        }
        else if (jumpingUp)
        {
            JumpUpward(target);
        }
        else if (movingEdge)
        {
            MoveToEdge();
        }
        else
        {
            PrepareJump(target);
        }
    }

    void PrepareJump(Vector3 target)
    {
        float targetY = target.y;
        Debug.Log("preparing");
        target.y = transform.position.y;

        CalculateHeading(target);
        Debug.Log("transform pos:" + transform.position.y);
        Debug.Log("targetY" + targetY);
        if (transform.position.y > targetY)
        {
            fallingDown = false;
            jumpingUp = false;
            movingEdge = true;
            //Debug.Log("Here");
            jumpTarget = transform.position + (target - transform.position) / 2.0f;
        }
        else
        {
            fallingDown = false;
            jumpingUp = true;
            movingEdge = false;

            velocity = heading * moveSpeed / 3.0f;

            float difference = targetY - transform.position.y;

            velocity.y = jumpVelocity * (0.5f + difference / 2.0f);
        }
    }

    void FallDownward(Vector3 target)
    {
        velocity += Physics.gravity * Time.deltaTime;

        if (transform.position.y <= target.y)
        {
            fallingDown = false;
            jumpingUp = false;
            movingEdge = false;

            Vector3 p = transform.position;
            p.y = target.y;

            transform.position = p;

            velocity = new Vector3();
        }
    }

    void JumpUpward(Vector3 target)
    {
        velocity += Physics.gravity * Time.deltaTime;

        if (transform.position.y > target.y)
        {
            jumpingUp = false;
            fallingDown = true;
        }
    }

    void MoveToEdge()
    {
        Debug.Log("Moving To Edge");
        if (Vector3.Distance(transform.position, jumpTarget) >= 0.8f)
        {
            SetHorizontalVelocity();
        }
        else
        {
            movingEdge = false;
            fallingDown = true;

            velocity /= 10.0f;
            velocity.y = 1.5f;
        }
    }

    public void CheckDirections()
    {
        Vector3 temp = new Vector3();
        temp.z = 0.1f;
        LookAround(temp, jumpHeight);
        LookAround(-temp, jumpHeight);
        temp.z = 0;
        temp.x = 0.1f;
        LookAround(temp, jumpHeight);
        LookAround(-temp, jumpHeight);
    }

    void LookAround(Vector3 direction, float jumpHeight)
    {
        Vector3 halfExtents = new Vector3(0.1f, (0.1f + jumpHeight / 4.0f), 0.1f);
        //Debug.DrawRay(transform.position, direction, Color.white);
        Collider[] colliders = Physics.OverlapBox(transform.position + direction, halfExtents);

        foreach (Collider item in colliders)
        {
            GameObject unit = item.gameObject;
            if (unit.gameObject.tag != this.gameObject.tag)
            {
                Debug.Log("Got a live one!");
                enemiesList.Add(unit);
            }
            /*if (tile != null)
            {
                RaycastHit hit;

                //Check if something above
                Vector3 temp = new Vector3();
                temp = Vector3.up;
                temp.y = 0.3f;
                var hitCheck = Physics.Raycast(tile.transform.position, temp, out hit, 1);
                Color color = hitCheck ? Color.green : Color.red;
                if (hit.collider != null)
                {
                    //Debug.Log(hit.collider.name);
                    //tileOccupant = hit.collider.tag;
                }

                Debug.DrawRay(transform.position, temp, color);
                if (Physics.Raycast(tile.transform.position, temp, out hit, 1))
                {
                    //Debug.Log(hit.collider.gameObject.name);
                }
                if (tile.occupied == true)
                {
                    //Debug.Log(hit.collider.gameObject.name);
                    if (tile.occupied)
                    {
                        Debug.Log("OCCUPIED");
                    }
                    enemiesList.Add(this.gameObject);
                }
            }*/

        }
    }

    public void BeginTurn()
    {
        turn = true;
    }

    public void EndTurn()
    {
        turn = false;
    }

    public void Attack(GameObject unit)
    {
        unit.SetActive(false);
        TurnManager.RemoveUnit(unit.GetComponent<GridMovement>());
    }
}
