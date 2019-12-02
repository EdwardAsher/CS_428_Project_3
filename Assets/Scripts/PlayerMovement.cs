/*
  Tutorial For Player movement from https://www.youtube.com/watch?v=cX_KrK8RQ2o
  Modified by Edward Reyes
 */
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
    private bool turnStart = false;

    bool targetValidated = false;
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
                else if (FocusedObject.tag == "NPC" )
                {
                    //if (!waiting)
                    //{
                    CheckTarget(FocusedObject.gameObject, "NPC");
                    ValidateTarget(FocusedObject.gameObject,"NPC");
                    //}
                    //else
                    //{
                    //    ValidateTarget(FocusedObject.gameObject);
                    //}
                }
                else if (FocusedObject.tag == "Player")
                {
                    CheckTarget(FocusedObject.gameObject, "Player");
                    ValidateTarget(FocusedObject.gameObject, "player");
                }
                else if (FocusedObject.tag == "Attack_Button")
                {
                    AttackTarget();
                }
                else if (FocusedObject.tag == "Wait_Button")
                {
                    Wait();
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
        if (waiting)
        {
            Quaternion toQuat = Camera.main.transform.localRotation;
            //Quaternion toQuat = cube.transform.parent.rotation;
            //if (this.gameObject.tag == "NPC")
            //{
                toQuat.y += 0.90f;
            //}
            
            toQuat.x = 0;
            toQuat.z = 0;
            cube.SetActive(true);
            //cube.transform.parent.rotation = toQuat;
            cube.transform.rotation = toQuat;
            CheckMouse();
            recognizer.StartCapturingGestures();
            CheckGesture();
        }
        else
        {
            cube.SetActive(false);
        }
        if (!turn || waiting)
        {
            return;
        }
        if (!moving)
        {
            if (turnStart == false)
            {
                turnStart = true;
                Vector3 temp = transform.position;
                //transform.position = target;
                //transform.position.y += 0.05;
                temp.y += 0.05f;
                transform.position = temp;
            }
            
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
                    
                    
                    Tile t = GetTargetTile(unit);
                    if (waiting || this.gameObject.tag == "NPC")
                    {
                        return;
                    }
                    target = unit;
                    if (AttackNearbyTiles() )
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
                if (hit.collider.tag == "Player")
                {
                    GameObject unit = hit.collider.gameObject;
                    //bool reachable = CheckBelow();
                    

                    Tile t = GetTargetTile(unit);
                    if (waiting || this.gameObject.tag == "Player")
                    {
                        return;
                    }
                    target = unit;
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
                if (hit.collider.tag == "Attack_Button")
                {
                    Debug.Log("Attack chosen");
                    //Tile t = hit.collider.GetComponent<Tile>();

                    //if (t.selectable)
                    //{
                    //move target

                    //    MovetoTile(t);
                    //}
                    CheckDirections();
                    if (enemiesList.Count > 0)
                    {
                        StartCoroutine("SelectTarget");
                    }
                    //decided = true;
                }
                if (hit.collider.tag == "Wait_Button")
                {
                    Debug.Log("Wait chosen");
                    //Tile t = hit.collider.GetComponent<Tile>();

                    //if (t.selectable)
                    //{
                    //move target

                    //    MovetoTile(t);
                    //}
                    decided = true;
                    turnStart = false;
                    //decided = true;
                }
            }
        }
    }

    IEnumerator SelectTarget ()
    {
        Debug.Log("testing");
        yield return new WaitUntil(() => ValidTarget(false));
        decided = true;
        turnStart = false;
    }

    bool ValidTarget(bool gesture)
    {
        if (Input.GetMouseButtonUp(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider.tag == "NPC")
                {
                    if (this.gameObject.tag == "NPC")
                        return false;
                    GameObject unit = hit.collider.gameObject;
                    //bool reachable = CheckBelow();
                    if (enemiesList.Contains(unit))
                    {
                        Debug.Log("Hit");
                        Attack(unit);
                        return true;
                    }
                    else return false;
                }
                if (hit.collider.tag == "Player")
                {
                    if (this.gameObject.tag == "Player")
                        return false;
                    GameObject unit = hit.collider.gameObject;
                    //bool reachable = CheckBelow();
                    if (enemiesList.Contains(unit))
                    {
                        Debug.Log("Hit");
                        Attack(unit);
                        return true;
                    }
                    else return false;
                }
            }
            
        }
        else if (gesture == true)
        {
            return true;
        }

        return false;
    }

    void ValidateTarget(GameObject tar, string tag)
    {
        if (tar.gameObject.tag == this.gameObject.tag || !waiting)
        {
            return;
        }
        target = tar;

        if (enemiesList.Contains(tar))
        {
            Debug.Log("Hit");
            debug.text = "Hit";
            Attack(tar);
            targetValidated = true;
            //ValidTarget(true);
            return;
        }
        else
        {
            return;
        }
    }

    void CheckTarget(GameObject tar, string tag)
    {
        //GameObject unit = hit.collider.gameObject;
        //bool reachable = CheckBelow();
        if (tar.gameObject.tag == this.gameObject.tag || waiting)
        {
            return;
        }
        target = tar.gameObject;

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

    void AttackTarget()
    {
        targetValidated = false;
        CheckDirections();
        if (enemiesList.Count > 0)
        {
            StartCoroutine("SelectGestureTarget");
        }
    }

    IEnumerator SelectGestureTarget()
    {
        
        yield return new WaitUntil(() => targetValidated);
        decided = true;
        turnStart = false;
    }

    void Wait()
    {
        decided = true;
        turnStart = false;
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
