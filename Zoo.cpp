    
/*********************************************************************
** Program FileName: Zoo.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Zoo class functions
** Input:
** Output:  Zoo objects
*********************************************************************/


/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2016
**  Description:  Zoo.cpp class
**************************************/
#include <iostream>
//#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
#include "Zoo.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Zoo()
**  Description:    Zoo constructor 
**  Parameters:   NONE
**  Pre-Conditions:  called in main
**  Post-Conditions:  creates Zoo
**  Return:
**************************************/
Zoo::Zoo()
{
  //  this->name = "CREATURE";
    //Zoo* Left = NULL;
    //Zoo* Right = NULL;
    //Zoo* Up = NULL;
    //Zoo* Down = NULL;
    name = "Nothing";//not used
    items.resize(5);
    for (int i = 0; i < 5; i ++)
            items[i] = "EMPTY";
    keeperWeak=false;
    winGame=false;
}
/***********************************
**  Function: ~Zoo()
**  Description:  Zoo destructor
**  Parameters:  
**  Pre-Conditions:
**  Post-Conditions:
**  Return:
**************************************/
Zoo::~Zoo()
{
}
void Zoo::interact(std::vector<std::string>& inventory)
{
    cout << "Testing the virtual function" << endl;
}
/***********************************
**  Function: setLocation(Zoo*, Zoo*, Zoo*, Zoo*)
**  Description:  creates pointers for zoo objects
**  Parameters:  Space*
**  Pre-Conditions:  Created Zoo* to point to
**  Post-Conditions:  linked Zoo* spaces
**  Return:
**************************************/
void Zoo::setLocation(Zoo* left, Zoo* right, Zoo* up, Zoo* down)
{
    Left = left;
    //cout << getName() << endl;
    Right = right;
    Up = up;
    Down = down;
}
/***********************************
**  Function:   getName()
**  Description:  returns string name
**  Parameters:  
**  Pre-Conditions:  created object
**  Post-Conditions:  returns string name
**  Return:  returns string name
**************************************/
std::string Zoo::getName()
{
    Left->name= "Left";
    return name;
}
/***********************************
**  Function: moveLeft()
**  Description:  returns the left pointer
**  Parameters:  none
**  Pre-Conditions:  setLocation set directional pointers
**  Post-Conditions:  returns Left
**  Return:  Left 
**************************************/
Zoo*  Zoo::moveLeft()
{
    if((Left!=NULL))
    {
        return Left;
    }
    else
    {
        cout << "You can't go there!" << endl;
        return Same;

    }
}
/***********************************
**  Function: moveRight()
**  Description:  returns right pointer
**  Parameters:  
**  Pre-Conditions: setLocation set directinal pointers
**  Post-Conditions:  returns Right
**  Return:  Right
**************************************/



Zoo* Zoo::moveRight()
{
    if((Right!=NULL))
    {
        return Right;
    }
    else
    {
        cout << "You can't go there!" << endl;
        return Same;

    }

}
/***********************************
**  Function: moveUp()
**  Description:  returns up pointer
**  Parameters:  
**  Pre-Conditions: setLocation set directional pointers
**  Post-Conditions: return Up
**  Return:  Up
**************************************/

Zoo* Zoo::moveUp()
{
    if((Up!=NULL))
    {
        return Up;
    }
    else
    {
        cout << "You can't go there!" << endl;
        return Same;

    }
}
/***********************************
**  Function: moveDown()
**  Description: returns Down pointer
**  Parameters:  
**  Pre-Conditions:  setLocation set directional pointers
**  Post-Conditions:  return down
**  Return: return Down
**************************************/
Zoo* Zoo::moveDown()
{
    if((Down!=NULL))
    {
        return Down;
    }
    else
    {
        cout << "You can't go there!" << endl;
        return Same;

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
std::string Zoo::getItem()
{
    cout << "here" << endl;
}
vector<string> Zoo::updateItems(vector<string>& itemIn)
{
    for (int i=0;i <5;i++)
        items[i]=itemIn[i];
    for (int i=0; i < 5; i++)
    {
        cout << i+1<<". In update Items " << items[i] << endl;
    }
    
    return items;
}
/***********************************
**  Function:  displayItems()
**  Description:  displays items in items
**  Parameters:  
**  Pre-Conditions: created vector items
**  Post-Conditions: displays all the items
**  Return:
**************************************/
void Zoo::displayItems()
{
    for (int i=0; i < 5; i++)
    {
        cout << i+1<<". In display " << items[i] << endl;
    }
}
/***********************************
**  Function:  setKeeperWeak
**  Description:  sets keeperWeak to true or fals
**  Parameters:  bool zooKeep
**  Pre-Conditions: keeperWeak initiated
**  Post-Conditions:  keeperWeak changed
**  Return:
**************************************/
void Zoo::setKeeperWeak(bool zooKeep)
{
    keeperWeak=zooKeep;
}
/***********************************
**  Function: getWinGame()
**  Description:  returns winGame bool
**  Parameters:  
**  Pre-Conditions:  winGame bool initiated
**  Post-Conditions: returns winGame bool
**  Return:  bool winGame
**************************************/
bool Zoo::getWinGame()
{
    return winGame;
}
    
























