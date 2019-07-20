
/*********************************************************************
** Program FileName: FrontGate.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description: FrontGate class functions
** Input:  Zoo derived class
** Output:  FrontGate objects
*********************************************************************/




/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2016
**  Description:  FrontGate  cpp file
**************************************/
#include <iostream>
//#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <iomanip>
#include "Zoo.hpp"
#include "Concessions.hpp"
#include "FrontGate.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::vector;

/***********************************
**  Function: FrontGate constructor
**  Description:  constructs FrontGate and set name
**  Parameters:  
**  Pre-Conditions:
**  Post-Conditions:
**  Return:
**************************************/
FrontGate::FrontGate() : Zoo()
{
    
    //Zoo* Left = NULL;
    //Zoo* Right = NULL;
    //Zoo* Up = new Concessions();
    //Zoo* Down = NULL;
    name="Front Gate";
}
/***********************************
**  Function: FrontGate destructor
**  Description:  destroys object
**  Parameters:  
**  Pre-Conditions:  
**  Post-Conditions: 
**  Return:
**************************************/
FrontGate::~FrontGate() 
{
}
/***********************************
**  Function: interact(vector<string> inventoryIn
**  Description:  runs game for FrontGate
**  Parameters:   inventorIn vector
**  Pre-Conditions:  Inventory vector created and game initiated
**  Post-Conditions:  based on if player has final key
**  Return:
**************************************/
void FrontGate::interact(vector<string>& inventoryIn)
{
    string menu;
    int selection;

        cout << "The front gate, where you tasted defeat at the hands of the zookeeper.  He taunts you on the other side." << endl;
        cout << "All you seek is revenge and to be reunited with your bunny family." << endl;
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
        
        if (inventoryIn[selection-1] == "FRONT GATE KEY")//FRONT GATE KEY
        {
            winGame=true;
            cout << "The zookeeper looks shocked when you open the Front Gate!" << endl;
            cout << "Zookeeper: \"Little bunny you didn't learn your lesson?  I will finish you for good this time!\"" << endl;
            cout <<"You: \"I'm stronger now!  All the animals you've abused have helped me along the way, and you are but a shadow of your former self.\"" << endl;
            cout <<"Zookeeper: \"Silly rabbit, we've been down this road before...\"" << endl;
            cout <<"You: \"Enough!! Lets finish this!\"" << endl;
            cout <<"You exchange blows but dodge the zookeeper effortlessly with your FLYING EAGLE.  The apes took much of the zookeeper's strength away" << endl;
            cout <<"You strike the final blow" << endl;
            cout <<"Zookeeper: \" You think you won??  You have no idea!!\" " << endl << endl << endl;

            cout <<"You run past the zookeeper and out of the park.  What did he mean?  Of course you won!  Then you see the apes and they don't recognize you." << endl;
            cout <<"Why is that?  You helped them escape...  They are walking back to the park, they don't even acknowledge you...  No matter, there's your family " <<endl;
            cout <<"ahead!  You go to speak to them... " << endl;
            cout <<"You:  Mom, Dad its me!!"  << endl;
            cout <<"They don't recognize you.  What's going on?????  What's happening???  You hear someone laughing as they approach you...its the zookeeper."<<endl;
            cout <<"Zookeeper:  I told you that you had no idea!!  You are just a little pawn in my game.  You have no family, no friends, you're not even a real bunny!" << endl;
            cout <<"Don't you remember? This isn't the first time you've escaped!!"<<endl;
            cout <<"You do remember.  You've escaped many times...this time will be different!!  The zookeeper presses the button on your back." << endl;
            cout <<"You wake up in the concession stand area and the zoo is packed with people.  Today you will escape and beat the zookeeper, reuniting with your family..." << endl;
            cout <<"To be continued..." <<endl; 

            
        }
        else if (inventoryIn[selection-1]=="EMPTY")
            cout << "You didn't select anything!" << endl;
        else 
            cout << "That item doesn't work here!" << endl;

    
    }
    else 
        cout << "The battle will happen another time! " << endl;
}
/***********************************
**  Function: getWinGame
**  Description:  returns bool wins game
**  Parameters:  
**  Pre-Conditions:  bool wingame initialized
**  Post-Conditions: returns winGAme
**  Return: returns winGame
**************************************/
bool FrontGate::getWinGame()
{
    return winGame;
}
/***********************************
**  Function:   getName()
**  Description:  returns string name
**  Parameters:  
**  Pre-Conditions:  created object
**  Post-Conditions:  returns string name
**  Return:  returns string name
**************************************/
std::string FrontGate::getName()
{
    return name;
}
