
/*********************************************************************
** Program FileName: Elephants.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Elephants Class functions
** Input:  derived from Zoo
** Output: Elephants objects
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
#include "Elephants.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Elephant constructor
**  Description:  sets getBucket and name 
**  Parameters:  
**  Pre-Conditions:  created in main
**  Post-Conditions: created object
**  Return:
**************************************/
Elephants::Elephants() : Zoo()
{
    
    //Zoo* Left = NULL;
    //Zoo* Right = new Concessions();
    //Zoo* Up = new Monkeys();
    //Zoo* Down = NULL;
    gotBucket=false;
    name= "Elephant Estuary";
}

/***********************************
**  Function: interact(vector<string> inventoryIn
**  Description:  runs game for Elephants
**  Parameters:   inventorIn vector
**  Pre-Conditions:  Inventory vector created and game initiated
**  Post-Conditions:  based on gotBucket = true or false
**  Return:
**************************************/
Elephants::~Elephants() 
{
}
void Elephants::interact(vector<string>& inventoryIn)
{
    int selection;
    if (gotBucket==false)
    {
    std::string menu;
    cout << "The elephants are laying around but are eying you anxiously.  There is a bucket lying next to them" << endl;
    cout << "Their water basin is almost empty and they look very tired.  What do you want to do?" << endl;
    do
    {      //menu template
        cout << "(1) Take the bucket and run!" << endl;
        cout << "(2) Use the bucket to fill the elephants water basin. " << endl;
        cout << "(3) Use an item from your backpack" << endl;
        cout << "(4) Move to a different area" << endl;
        cout << "Choose option 1, 2, 3, or 4" << endl;
        cin >> menu;
    
    
    }  while (menu != "1" && menu != "2" && menu != "3" && menu != "4");
    if (menu == "1")
    {
        cout << "The elephants try to chase you but you manage to hide.  Better get out of here!!" << endl;
    }
    if (menu == "2")
    {
        cout << "The elephants are so thankful for your kindness they let you take the bucket" << endl;
        gotBucket=true;
        for (int i = 0; i < 5; i++)
        {
            if (inventoryIn[i]=="EMPTY")
            {
                inventoryIn[i]="BUCKET";
                gotBucket=true;
                break;
            }
        }
    }
    if (menu == "3")
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
        
        if (inventoryIn[selection-1]=="EMPTY")
            cout << "You didn't select anything!" << endl;
        else 
            cout << "That item doesn't work here!" << endl;
    }
    }
    else 
    {
        cout << "The elephanst are so thankful for your kindness!" << endl;
    //    item = "EMPTY";
    }

}
/***********************************
**  Function:   getName()
**  Description:  returns string name
**  Parameters:  
**  Pre-Conditions:  created object
**  Post-Conditions:  returns string name
**  Return:  returns string name
**************************************/
std::string Elephants::getName()
{
    return name;
}
/***********************************
**  Function: getItem()
**  Description:  returns string item
**  Parameters:  
**  Pre-Conditions:  child class of zoo object
**  Post-Conditions:  return string item
**  Return:  return string item
**************************************/
std::string Elephants::getItem()
{
    cout << item << endl;
    return item;
}
