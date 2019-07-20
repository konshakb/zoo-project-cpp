
/*********************************************************************
** Program FileName:  Concessions.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Concessions member functions
** Input:  derived from Zoo
** Output:  Concessions objects
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
#include "Elephants.hpp"
#include "Birds.hpp"
#include "FrontGate.hpp"
#include "Concessions.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: Concession constructor
**  Description:  sets name and line = true
**  Parameters:  
**  Pre-Conditions:  created in main
**  Post-Conditions:  object created
**  Return:
**************************************/
Concessions::Concessions() : Zoo()
{
   // name = "Concessions";
    
    //  Left = new Elephants();
    //  Right = new Birds();
    //  Up = new Giraffes();
    //  Down = new FrontGate();
    name = "Concession stand" ;
    line=true;
}
Concessions::~Concessions() 
{
}
/***********************************
**  Function: Concession interact function
**  Description:  Runs the gameplay for the concessions space
**  Parameters:  inventory vector passed by reference
**  Pre-Conditions:  invetoryIn in main created 
**  Post-Conditions: based on line = true or false
**  Return:
**************************************/
void Concessions::interact(vector<string>& inventoryIn)
{
    string menu;
    int selection;
    
    if (line == true)
    {
        cout << "The zoo is packed today.  There is a very long line at the concession stand. They appear to be drawn to the delightful aroma of food. " << endl;
        cout  <<"There could be something of use at the concession stand but you don't have the time to wait in line. " << endl;
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
        if (inventoryIn[selection-1] == "FILLED BUCKET")
        {
            line = false;
            cout << "You put the bucket down and the crowd gets a little uneasy. " << endl;
            cout << "Suddenly everyone starts holding their nose and running for the exit! " << endl;
            cout <<"You move to the front of the line where you get their last snack. " << endl;
            inventoryIn[selection]="SNACK";
        }
        else if (inventoryIn[selection-1]=="EMPTY")
            cout << "You didn't select anything!" << endl;
        else 
            cout << "That item doesn't work here!" << endl;

    
    }
    }
    else 
        cout << "The line is still gone.  That's very potent stuff!" << endl;

}
/*void Concessions::setLocation(Zoo* left, Zoo* right, Zoo* up, Zoo* down)
{
    Left = left;
    Right = right;
    Up = up;
    Down = down;
}*/
/***********************************
**  Function:   getName()
**  Description:  returns string name
**  Parameters:  
**  Pre-Conditions:  created object
**  Post-Conditions:  returns string name
**  Return:  returns string name
**************************************/
std::string Concessions::getName()
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
std::string Concessions::getItem()
{
    cout << item << endl;
    return item;
}
    

