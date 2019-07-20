
/*********************************************************************
** Program FileName: Giraffes.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Giraffes class functions
** Input:  Derived from Zoo class
** Output:  Giraffes objects
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
#include "Monkeys.hpp"
#include "Concessions.hpp"
#include "Apes.hpp"
#include "Giraffes.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Giraffe constructor 
**  Description:  construct object for hungry=true and name = giraffeland
**  Parameters:  
**  Pre-Conditions:
**  Post-Conditions:
**  Return:
**************************************/
Giraffes::Giraffes() : Zoo()
{
  hungry=true;  
  name="GiraffeLand";
}
/***********************************
**  Function: Giraffe destructor
**  Description:  destroys Giraffes
**  Parameters:  
**  Pre-Conditions:  
**  Post-Conditions: 
**  Return:
**************************************/
Giraffes::~Giraffes() 
{
}
/***********************************
**  Function: interact(vector<string> inventoryIn
**  Description:  runs game for Giraffes
**  Parameters:   inventorIn vector
**  Pre-Conditions:  Inventory vector created and game initiated
**  Post-Conditions:  based on hungry = true or false
**  Return:
**************************************/
void Giraffes::interact(vector<string>& inventoryIn)
{
    string menu;
    int selection;
    if (hungry==true)
    {
        cout << "The giraffes look so hungry and the zookeeper hasn't refilled their snack supply. " << endl;
        cout << "The branches are just out of their reach and they just want a snack. " << endl;
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
        cout << endl;
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
        
        if (inventoryIn[selection-1] == "SNACK")
        {
            hungry = false;
            cout << "The giraffes all come to you when they see your snacks. " << endl;
            cout << "They are all eating from the palm of your hand." << endl;
            cout <<"You notice that one of the giraffes has a key around its neck." << endl;
            cout <<"As the giraffe eats you grab the key around its neck.  Time to go. " << endl;
            inventoryIn[selection-1]="KEY";
        }
        else if (inventoryIn[selection-1]=="EMPTY")
            cout << "You didn't select anything!" << endl;
        else 
            cout << "That item doesn't work here!" << endl;

    
    }
    }
    else 
        cout << "The giraffes are happy and interacting with the guests." << endl;
}
/***********************************
**  Function: getItem()
**  Description:  returns string item
**  Parameters:  
**  Pre-Conditions:  child class of zoo object
**  Post-Conditions:  return string item
**  Return:  return string item
**************************************/
std::string Giraffes::getItem()
{
    cout << item << endl;
    return item;
}
/***********************************
**  Function:   getName()
**  Description:  returns string name
**  Parameters:  
**  Pre-Conditions:  created object
**  Post-Conditions:  returns string name
**  Return:  returns string name
**************************************/
std::string Giraffes::getName()
{
    return name;
}
