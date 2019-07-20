
/*********************************************************************
** Program FileName:  Player.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Player class functions, 
** Input:  Zoo* pointer parameter to correct
** Output:  Player object
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
#include "Concessions.hpp"
#include "Apes.hpp"
#include "Monkeys.hpp"
#include "Elephants.hpp"
#include "FrontGate.hpp"
#include "Giraffes.hpp"
#include "Birds.hpp"
#include "Player.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Player constructor
**  Description: creates player and sets Location and iventory items
**  Parameters:  
**  Pre-Conditions:
**  Post-Conditions:
**  Return:
**************************************/
Player::Player(Zoo* location)
{
  //  this->name = "CREATURE";
    Location = location;
    items.resize(5);
    for (int i = 0; i < 5; i ++)
            items[i] = "EMPTY";
}
/***********************************
**  Function: Player destructor
**  Description: destroy object
**  Parameters:  
**  Pre-Conditions:
**  Post-Conditions:
**  Return:
**************************************/
Player::~Player()
{
}
/***********************************
**  Function: getLocation()
**  Description:  returns Location Zoo*
**  Parameters:  
**  Pre-Conditions:  created player gets location
**  Post-Conditions: returns Location pointer
**  Return:  returns location pointer
**************************************/

Zoo* Player::getLocation()
{
    return Location;
}
/***********************************
**  Function: setLocation
**  Description: moves player to new Location based on up down left right
**  Parameters:  Zoo*
**  Pre-Conditions:  Player created and put in place
**  Post-Conditions:  player moves to new location
**  Return:  returns Zoo*
**************************************/
void Player::setLocation(Zoo* ZooIn)
{
    Location = ZooIn;
}
/***********************************
**  Function: addItem
**  Description:  adds item to inventory items
**  Parameters:  itemIn string
**  Pre-Conditions:  created items
**  Post-Conditions:  item added
**  Return:  
**************************************/
void Player::addItem(std::string itemIn)
{
    for (int i=0; i < 5; i++)
        if (items[i]=="EMPTY")
        {
            items[i]=itemIn;
            break;
        }
}
/***********************************
**  Function: display items
**  Description:  returns items
**  Parameters:  
**  Pre-Conditions:  created vector
**  Post-Conditions:  vectory items returned
**  Return: vectory items
**************************************/
std::vector<std::string> Player::displayItems()
{
    return items;
}
    



