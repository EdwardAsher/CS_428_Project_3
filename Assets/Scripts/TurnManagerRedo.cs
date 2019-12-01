using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TurnManagerRedo : MonoBehaviour
{
    static Dictionary<string, List<GridMovement>> units = new Dictionary<string, List<GridMovement>>();
    static Queue<string> turnKey = new Queue<string>();
    static Queue<GridMovement> turnTeam = new Queue<GridMovement>();
    public Text teamtext;

    static public List<GridMovement> teamOne;
    static string teamOneType;
    static public List<GridMovement> teamTwo;
    static string teamTwoType;

    static int unitsLeft = 0;
    static private bool turn = false;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (unitsLeft == 0)
        {
            InitTeamTurnQueue();
        }
        UIChange();
    }

    void InitTeamTurnQueue()
    {
        /*List<GridMovement> teamList = units[turnKey.Peek()];

        foreach (GridMovement unit in teamList)
        {
            //Debug.Log(unit.name);
            turnTeam.Enqueue(unit);
        }
        StartTurn();*/
        if (turn == false)
        {
            unitsLeft = teamOne.Count;
            StartCoroutine("StartTurn", teamOne);
        }
        else
        {
            unitsLeft = teamTwo.Count;
            StartCoroutine("StartTurn", teamTwo);
        }
    }

    public static IEnumerator StartTurn(List<GridMovement> team)
    {
        /*if (turnTeam.Count > 0)
        {
            Debug.Log(turnTeam.Peek().tag);
            turnTeam.Peek().BeginTurn();
        }
        else
        {
            string team = turnKey.Dequeue();
            turnKey.Enqueue(team);
            InitTeamTurnQueue();
        }*/
        foreach (GridMovement unit in team)
        {
            unit.BeginTurn();
            yield return new WaitUntil(() => !unit.turn);
        }


    }

    public void UIChange()
    {
        if (turnTeam.Peek().tag == "NPC")
        {
            teamtext.text = "Current team: Red team";
        }
        else
        {
            teamtext.text = "Current team: Blue team";
        }
    }

    /*public void EndTurn()
    {
        GridMovement unit = turnTeam.Dequeue();
        unit.EndTurn();

        if (turnTeam.Count > 0)
        {
            StartTurn();
        }
        else
        {
            string team = turnKey.Dequeue();
            turnKey.Enqueue(team);
            InitTeamTurnQueue();
        }
    }*/

    public static void AddUnit(GridMovement unit)
    {
        /*List<GridMovement> list;

        if (!units.ContainsKey(unit.tag))
        {
            list = new List<GridMovement>();
            units[unit.tag] = list;

            if (!turnKey.Contains(unit.tag))
            {
                turnKey.Enqueue(unit.tag);
            }
        }
        else
        {
            list = units[unit.tag];
        }
        //Debug.Log(unit.name);
        list.Add(unit);*/
        if (teamOne.Count == 0)
        {
            teamOne.Add(unit);
            teamOneType = unit.gameObject.tag;
        }
        else if (teamOneType == unit.gameObject.tag)
        {
            teamOne.Add(unit);
        }
        else
        {
            if (teamTwo.Count == 0)
            {
                teamTwo.Add(unit);
                teamTwoType = unit.gameObject.tag;
            }
            else if (teamTwoType == unit.gameObject.tag)
            {
                teamOne.Add(unit);
            }
        }
    }

    public static void RemoveUnit(GridMovement unit)
    {
        if (teamOneType == unit.gameObject.tag)
        {
            if (teamOne.Contains(unit))
            {
                teamOne.Remove(unit);
            }
        }
        else if(teamTwoType == unit.gameObject.tag)
        {
            if (teamTwo.Contains(unit))
            {
                teamTwo.Remove(unit);
            }
        }
        //if(turnKey.Contains(unit.tag))
        //{
        //Debug.Log(units);
        //Debug.Log(turnKey);
        //Debug.Log(turnTeam);
        //List<GridMovement> teamList = units[turnKey.Peek()];
        //foreach (GridMovement target in teamList)
        //{
        //    Debug.Log(target.gameObject.tag);
        //}
        /*Debug.Log(unit);
        Debug.Log(units[unit.tag]);
        units[unit.tag].Remove(unit);
        if (units[unit.tag].Count == 0)
        {
            //units[unit.tag]);
            Debug.Log("Game Over");

        }*/

        /*string init = turnKey.Dequeue();
        string team = init;
        while (turnKey.Dequeue() != init)
        {
            turnKey.Enqueue(team);
        }*/



        //InitTeamTurnQueue();

        //units.Remove(unit.tag);
        //turnKey = new Queue<string>(turnKey.Where(p => p != v));
        //}
    }
}
