
/*********************************************************************
** Program FileName: main.cpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  runs the Zoo game
** Input:  
** Output:  Plays game using menu function
*********************************************************************/


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
using std::vector;
string menu();//menu function
int main()
{
    cout << "*******************************************************************************************************************************************************" << endl;
    cout << "                                                               Welcome To THE ZOO!! " << endl;
    cout << "The goal is to escape by using various items throughout the park.  Interact with spaces, use items, and escape the zoo by defeating the zoo keeper." << endl;
    cout << "                       You have 30 moves to win the game.  At the end the game will tell you how many moves it took to win " << endl;
    cout << "********************************************************************************************************************************************************"<< endl;
    vector<string> inventory;//holds inventory
    inventory.resize(5);
    Zoo* concessions = new Concessions();//create pointers for game
    Zoo* apes = new Apes();
    Zoo* monkeys = new Monkeys();
    Zoo* elephants = new Elephants();
   Zoo* frontGate = new FrontGate();
    Zoo* giraffes = new Giraffes();
    Zoo* birds = new Birds();
    concessions->setLocation(elephants, birds, monkeys, frontGate);
    elephants->setLocation(NULL, concessions, giraffes, NULL);//should be NULL concessions monkeys NULL
    frontGate->setLocation(NULL, NULL, concessions, NULL);//should be NULL giraf NULL elephant
    monkeys->setLocation(giraffes, apes, NULL, concessions);
    giraffes->setLocation(NULL, monkeys, NULL, elephants);//monkey apes NULL concessions
    apes->setLocation(monkeys, NULL, NULL, birds); //gir NULL NULL birds
    birds->setLocation(concessions, NULL, apes, NULL);
    //cout <<concessions->getName() << endl;
    Player player(concessions);//starting location
    inventory = player.displayItems();//set the inventory vector to all empty
    bool gameOver=false;//switches to true when game is over
    int gameWin=false;//gameWin switches when player wins
    int overCount=0;//tracks moves
    cout << "\nYou've been in this zoo away from your family for years.  The last time you tried to escape \n";
    cout <<"the evil zookeeper defeated you and destroyed your exhibit.  You are the last remaining rabbit in the \n";
    cout <<"park, but your don't have a home.  Today is the day you defeat the zookeeper and escape this awful place, \n";
    cout <<"and reunite with your family waiting for you on the other side. \n\n\n";
    string menuMain;
    string menuMainTwo;
   /*****************
    * run each round of the game and move player and interact
    *************************/ 
    do
    {
        cout << "You are at: " <<player.getLocation()->getName() << endl;
        menuMain=menu();
    if (menuMain == "1")
    {
        if (player.getLocation()->moveLeft() != NULL)   //moveLeft
        {
            player.setLocation(player.getLocation()->moveLeft());  //setLocation is moveLeft
            player.getLocation()->interact(inventory);
            overCount++;
        }
    }
    if (menuMain == "2")
    {
        if (player.getLocation()->moveRight() != NULL)
        {
            player.setLocation(player.getLocation()->moveRight());
            player.getLocation()->interact(inventory);
            overCount++;
        }
    }
    if (menuMain == "3")
    {
        if (player.getLocation()->moveUp() != NULL)
        {
            player.setLocation(player.getLocation()->moveUp());
            player.getLocation()->interact(inventory);
            overCount++;
        }
    }
    if (menuMain == "4")
    {
        if (player.getLocation()->moveDown() != NULL)
        {
            player.setLocation(player.getLocation()->moveDown());
            player.getLocation()->interact(inventory);
            overCount++;
            gameWin=player.getLocation()->getWinGame();
        }
    }
    if (menuMain == "5")
    {
            player.getLocation()->interact(inventory);
            overCount++;
            gameWin=player.getLocation()->getWinGame();

    }
    if (menuMain=="6")
    {
        do
        {
        cout << "Are you sure you want to quit? " << endl;
        cout << "(1) YES " << endl;
        cout << "(2) NO " << endl;
        cin >> menuMainTwo;
        if (menuMainTwo=="1")


        gameOver=true;
        } while ( menuMainTwo != "1" && menuMainTwo != "2");
        
    }
    if (overCount == 30)
        gameOver= true;


    } while (gameOver==false && gameWin==false);
    if (gameWin==true)
        cout<<"You've completed your journey in " << overCount << " turns." << endl;
    if (gameOver == true && overCount == 30)
        cout <<"You've ran out of your " << overCount << " turns." << endl;
    else if (gameWin==false)
        cout << "Come back!!  This bunny needs you! " << endl;

    delete concessions;
    delete giraffes;
    delete apes;
    delete monkeys;
    delete birds;
    delete frontGate;
    delete elephants;
    
    

    return 0;
}
/***********************************
**  Function:   menu()
**  Description:  menu to play game
**  Parameters:  
**  Pre-Conditions:  created in main
**  Post-Conditions:  returns string for menu choice
**  Return:  returns string for menu
**************************************/
string menu()
{
    string menu;
    do//menu to control the game
    {   //menu template
        cout << endl << endl;

        cout << "(1) Move Left                          Map:    GiraffeLand         Monkey Island          Ape Escape " << endl;
        cout << "(2) Move Right " << endl;
        cout << "(3) Move Up                                    Elephant Estuary    Concession Stand       Eagle Exhibit   " << endl;
        cout << "(4) Move Down " << endl;
        cout << "(5) Stay in Same Place                                             Front Gate  " << endl;
        cout << "(6) Exit game " << endl;
        cout << "Choose option 1, 2, 3, 4, 5, or 6." << endl << endl << endl;
        cin >> menu;
    }  while (menu != "1" && menu != "2" && menu != "3" && menu != "4" && menu != "5" && menu != "6");
    return menu;
}
    
    
    
