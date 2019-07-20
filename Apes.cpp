/*********************************************************************
** Program FileName:
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Apes Class functions
** Input:  derived from Zoo class
** Output:  Apes objects
*********************************************************************/

#include <iostream>
//#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
#include "Zoo.hpp"
#include "Giraffes.hpp"
#include "Birds.hpp"
#include "Apes.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Apes Constructor
**  Description:  constructs Apes object
**  Parameters:  
**  Pre-Conditions:  Zoo derived class
**  Post-Conditions:  caged set to true, name set to ape exhibit
**  Return:
**************************************/
Apes::Apes() : Zoo()
{
    
    //Zoo* Left = new Giraffes();
    //Zoo* Right = NULL;
    //Zoo* Up = NULL;
    //Zoo* Down = new Birds();
    caged=true;
    name = "Ape Exhibit";
}
/***********************************
**  Function: Apes Destructor
**  Description:  
**  Parameters:  
**  Pre-Conditions:  created Apes object
**  Post-Conditions: destroys object
**  Return:
**************************************/
Apes::~Apes() 
{
}
/***********************************
**  Function: interact(vector<string> inventoryIn
**  Description:  runs game for Apes
**  Parameters:   inventorIn vector
**  Pre-Conditions:  Inventory vector created and game initiated
**  Post-Conditions:  based on caged = true or caged = false
**  Return:
**************************************/
void Apes::interact(vector<string>& inventoryIn)
{
    string menu;
    int selection;
    if (caged==true)
    {
        cout << "The apes look at you with sadness in their eyes.  Their home is far from here." << endl;
        cout << "They look at you as if you are their only hope.  If they could talk they would probably say so." << endl;
        cout << "What do you want to do? " << endl;
    do
    {      //menu template
        //cout << "(1) !" << endl;
        cout << "(1) Use an item from your backpack." << endl;
        cout << "(2) Leave." << endl;
        //cout << "(3) Run for your life!" << endl;
        cout << "Choose option 1 or 2" << endl;
        cin >> menu;
    
    
    }  while (menu != "1" && menu != "2");
    if (menu=="1")
    {
        for (int i = 0; i<5; i++)
        {
            cout << i+1 <<".  " << inventoryIn[i] << endl;
        }
        while (cout  << "Which Item will you use?"  && !(cin >> selection) || selection  < 1 || selection > 5)
        {
            cout << "That's not a number between 1 and 5; " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        if (inventoryIn[selection-1] == "KEY")
        {
            caged = false;
            keeperWeak=true;
            cout << "The apes rush out of their cages and into the zoo.  One of them turns to you: " << endl;
            cout << "Ape Leader: \"Thank you for saving us.  It is time for us to leave this place." << endl;
            cout <<"We will attack the zookeeper when we leave.  Hopefully that will help you.\"" << endl;
            cout <<"The Apes escape, and in the distance you can hear them pummeling the zookeeper before they leave" << endl;
            moveDown()->setKeeperWeak(1);
        }
        else if (inventoryIn[selection-1]=="EMPTY")
            cout << "You didn't select anything!" << endl;
        else 
            cout << "That item doesn't work here!" << endl;

    
    }
    }
    else 
        cout << "The empty cages bring you a sense of satisfaction...and disbelief that the apes could talk." << endl;
}

/***********************************
**  Function: getItem()
**  Description:  returns string item
**  Parameters:  
**  Pre-Conditions:  child class of zoo object
**  Post-Conditions:  return string item
**  Return:  return string item
**************************************/
std::string Apes::getItem()
{
    cout << item << endl;
    return item;
}


/***********************************
**  Function: getName()
**  Description:  returns string name
**  Parameters:  
**  Pre-Conditions:  child class of zoo object
**  Post-Conditions:  return string name
**  Return:  return string name
**************************************/
std::string Apes::getName()
{
    return name;
}
