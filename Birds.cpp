
/*********************************************************************
** Program FileName:  Birds.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Birds class functions
** Input:  derived from Zoo class
** Output:  Birds objects
*********************************************************************/
#include <iostream>
//#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Zoo.hpp"
#include "Apes.hpp"
#include "Concessions.hpp"
#include "Birds.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;

/***********************************
**  Function: Birds Constructor
**  Description: creates Birds object training = false and name created
**  Parameters:  
**  Pre-Conditions:  created in main
**  Post-Conditions:  object created
**  Return:
**************************************/
Birds::Birds() : Zoo()
{
    
//      Left = ptrConcessions;
 //   Zoo* Right = NULL;
 //   Zoo* Up = new Apes();
  //  Zoo* Down = NULL;
  training = false;
  name = "Eagle Exhibit";
}
/***********************************
**  Function: Bird destructor
**  Description:  destroys object
**  Parameters:  
**  Pre-Conditions:  
**  Post-Conditions: 
**  Return:
**************************************/
Birds::~Birds() 
{
 //   delete Left;
 //   delete Up;
}

/***********************************
**  Function: interact(vector<string> inventoryIn
**  Description:  runs game for Birds
**  Parameters:   inventorIn vector
**  Pre-Conditions:  Inventory vector created and game initiated and keeperWeak from apes
**  Post-Conditions:  based on bool keeperWeak and training
**  Return:
**************************************/
void Birds::interact(std::vector<std::string>& inventoryIn)
{
    string menu;
    int selection;
    //cout << keeperWeak << " " << training << endl;
    if (keeperWeak==true && training==false)
    {
        cout << "The eagles fly around you in circles. Their leader lands on the branch in front of you." << endl;
        cout << "\"Could it be the prophecy is true?  That a rabbit will rise up and defeat the evil zookeeper?" << endl;
        cout << "Now that the apes have weakened him, we will train you in the art of Flying Eagle." << endl;
        cout << "Use it to dodge the zookeeper's attacks. " << endl << endl;
        cout << "But be warned...you might not like what you see out in the world.\" " << endl;
        cout << "Take this key and open the front gate.  Vanquish the zookeeper and fulfill your destiny!" << endl;
        training = true;
        inventoryIn[3]="FRONT GATE KEY";
        inventoryIn[2]="FLYING EAGLE TRAINING CERTIFICATION";

    
    }
    else if (training==true)
        cout << "The eagles look at you approvingly as if belonged in their convocation. " << endl;
    else 
    {
        cout << "The eagles fly overhead, looking at you like prey, but they don't strike. " << endl;
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
        if (inventoryIn[selection-1] == "EMPTY")
        {
            cout <<"Please pick an item. " << endl;
        }
        else
            cout << "That item doesn't work here. " << endl;
    }
    }

}
/***********************************
**  Function: getItem()
**  Description:  returns string item
**  Parameters:  
**  Pre-Conditions:  child class of zoo object
**  Post-Conditions:  return string item
**  Return:  return string item
**************************************/
std::string Birds::getItem()
{
    cout << item << endl;
    return item;
}
/***********************************
**  Function:   getName()
**  Description:  returns string name
**  Parameters:    none
**  Pre-Conditions:  created object
**  Post-Conditions:  returns string
**  Return: string name
**************************************/
std::string Birds::getName()
{
    return name;
}
