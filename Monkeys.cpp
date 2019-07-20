
/*********************************************************************
** Program FileName:  Monkeys.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Monkeys class derived from zoo functions
** Input:  child class from Zoo
** Output:  Monkeys objects
*********************************************************************/



#include <iostream>
//#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Zoo.hpp"
#include "Giraffes.hpp"
#include "Elephants.hpp"
#include "Monkeys.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Monkey Constructor
**  Description: create constructor and filledBucket = false and name
**  Parameters:  
**  Pre-Conditions:
**  Post-Conditions:
**  Return:
**************************************/
Monkeys::Monkeys() : Zoo()
{
    
    //Zoo* Left = NULL;
    //Zoo* Right = new Giraffes();
    //Zoo* Up = NULL;
    //Zoo* Down = new Elephants();
    filledBucket=false;
    name = "Monkey Island";
}
/***********************************
**  Function: Monkey destructor
**  Description:  cleans up directional pointers
**  Parameters:  
**  Pre-Conditions:  hanging pointers
**  Post-Conditions: frees up memory
**  Return:
**************************************/
Monkeys::~Monkeys() 
{
    //delete Right;
    //delete Down;
}
/***********************************
**  Function: interact(vector<string> inventoryIn
**  Description:  runs game for Monkeys
**  Parameters:   inventorIn vector
**  Pre-Conditions:  Inventory vector created and game initiated
**  Post-Conditions:  based on filledBucket true or false
**  Return:
**************************************/
void Monkeys::interact(vector<string>& inventoryIn)
{
    int selection;
    std::string menu;
    if (filledBucket==false)
    {
        cout << "These monkeys are not happy and they are throwing...errr their poop at all the guests. " << endl;
        cout << "What do you want to do? " << endl;

    
    do
    {      //menu template
        //cout << "(1) !" << endl;
        cout << "(1) Try to block the incoming fire. " << endl;
        cout << "(2) Use an item from your backpack" << endl;
        cout << "(3) Run for your life!" << endl;
        cout << "Choose option 1, 2, or 3" << endl;
        cin >> menu;
    
    
    }  while (menu != "1" && menu != "2" && menu != "3" && menu != "4");
    if (menu == "1")
    {
        cout << "Gross...you quickly realize the error in your ways and hide." << endl;
    }
    if (menu == "2")
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
        
        if (inventoryIn[selection-1]=="BUCKET")
        {
            inventoryIn[selection-1] ="FILLED BUCKET";
            cout << "OK...You filled the bucket and it SMELLS DISGUSTING!  Why would you do this?" << endl;
            filledBucket=true;
        }
        else if (inventoryIn[selection-1]=="EMPTY")
            cout << "You didn't select anything!" << endl;
        else 
            cout << "That item doesn't work here!" << endl;
    }
    }
    else 
        cout << "The monkeys are still treating the guests as target practice, but there is nothing left to do here." << endl;
        
    

}
/***********************************
**  Function: getItem()
**  Description:  returns string item
**  Parameters:  
**  Pre-Conditions:  child class of zoo object
**  Post-Conditions:  return string item
**  Return:  return string item
**************************************/

std::string Monkeys::getItem()
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
std::string Monkeys::getName()
{
    return name;
}
