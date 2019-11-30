using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;
using UnityEngine.UI;

public class PlayerMovement : GridMovement
{
    public static PlayerMovement Instance { get; private set; }
    public GameObject FocusedObject { get; private set; }
    GestureRecognizer recognizer;

    public GameObject cube;
    public Text debug;
    private int i = 0;
    // Start is called before the first frame update
    void Start()
    {
        //Instance = this;
        recognizer = new GestureRecognizer();
        recognizer.Tapped += (args) =>
        {
            //FocusedObject.SendMessageUpwards("Test", SendMessageOptions.DontRequireReceiver);
            //Test();
            //FocusedObject.SendMessageUpwards("Test2", SendMessageOptions.DontRequireReceiver);
            // Send an OnSelect message to the focused object and its ancestors.
            if (FocusedObject != null)
            {
                if (FocusedObject.tag == "Tile")
                {
                    OnSelect(FocusedObject.gameObject);
                }
                else if (FocusedObject.tag == "NPC")
                {
                    CheckTarget(FocusedObject.gameObject);
                }
                //FocusedObject.SendMessageUpwards("OnSelect", SendMessageOptions.DontRequireReceiver);
            }
        };
        //recognizer.StartCapturingGestures();
        Init();
        cube.SetActive(false);
        target = null;
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
                tile.tileOccupant = this.tag;
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
            //Comment CheckMouse out if running on HoloLens
            CheckMouse();
            //recognizer.CancelGestures();
            recognizer.StartCapturingGestures();
            CheckGesture();
        }
        else
        {
            if (tile != null)
            {
                tile.occupied = false;
                tile.tileOccupant = null;
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
                if (hit.collider.tag == "NPC")
                {
                    GameObject unit = hit.collider.gameObject;
                    //bool reachable = CheckBelow();
                    target = unit;
                    
                    Tile t = GetTargetTile(unit);

                    if (AttackNearbyTiles())
                    {
                        //move target
                        //target = unit;
                        MovetoTile(t);
                        //Attack(unit);
                    }
                    else
                    {
                        target = null;
                    }
                }
            }
        }
    }

    void CheckTarget(GameObject tar)
    {
        //GameObject unit = hit.collider.gameObject;
        //bool reachable = CheckBelow();
        target = tar;

        Tile t = GetTargetTile(tar);

        if (AttackNearbyTiles())
        {
            //move target
            //target = unit;
            MovetoTile(t);
            //Attack(unit);
        }
        else
        {
            target = null;
        }
    }

    // Called by GazeGestureManager when the user performs a Select gesture
    void OnSelect(GameObject gaze)
    {
        // If the sphere has no Rigidbody component, add one to enable physics.
        /*if (!this.GetComponent<Rigidbody>())
        {
            var rigidbody = this.gameObject.AddComponent<Rigidbody>();
            rigidbody.collisionDetectionMode = CollisionDetectionMode.Continuous;
        }*/
        //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        //GestureRecognizer recognizer;
        //recognizer = new GestureRecognizer();
        //RaycastHit hit;
        //var headPosition = Camera.main.transform.position;
        //var gazeDirection = Camera.main.transform.forward;
        //if (Physics.Raycast(headPosition, gazeDirection, out hit))
        //{
        //    if (hit.collider.tag == "Tile")
        //    {
        //        Tile t = hit.collider.GetComponent<Tile>();
        //if (!turn)
        //{
        /*if (cube.activeSelf == true)
        {
            cube.SetActive(false);
        }
        else
        {
            cube.SetActive(true);
        }*/
        //return;
        //}
        //if (!moving)
        //{
        /*if (cube.activeSelf == true)
        {
            cube.SetActive(false);
        }
        else
        {
            cube.SetActive(true);
        }*/
        //if (gaze.tag == "Tile")
        //{
        //debug.text = "entries for: " + gameObject.name + " " + i; 
        if (moving)
        {
            return;
        }
        Tile t = gaze.GetComponent<Tile>();
        if (t.selectable)
        {
            //move target and reset gestures
            //recognizer.CancelGestures();
            //recognizer.StartCapturingGestures();
            MovetoTile(t);
        }
        recognizer.CancelGestures();
        //}

        //}

    }
        //}
    //}
    void Test()
    {
        if (cube.activeSelf == true)
        {
            cube.SetActive(false);
        }
        else
        {
            cube.SetActive(true);
        }
        
    }

    private void CheckGesture()
    {
        GameObject oldFocusObject = FocusedObject;

        // Do a raycast into the world based on the user's
        // head position and orientation.
        var headPosition = Camera.main.transform.position;
        var gazeDirection = Camera.main.transform.forward;

        RaycastHit hitInfo;
        if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            // If the raycast hit a hologram, use that as the focused object.
            FocusedObject = hitInfo.collider.gameObject;
        }
        else
        {
            // If the raycast did not hit a hologram, clear the focused object.
            FocusedObject = null;
        }

        // If the focused object changed this frame,
        // start detecting fresh gestures again.
        if (FocusedObject != oldFocusObject)
        {
            recognizer.CancelGestures();
            recognizer.StartCapturingGestures();
        }
    }

    bool CheckBelow()
    {
        return true;
    }
}
