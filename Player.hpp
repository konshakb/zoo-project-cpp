
/*********************************************************************
** Program FileName: Player.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Player header file
** Input:
** Output:
*********************************************************************/



/***********************************
**  Author:  Bryan Konshak
**  Date:  11/30/2016
**  Description:  Player class
**************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP


#include <string>
#include <vector>



class Player
{

protected:
    Zoo* Location;
    //std::string items[10];
    std::vector<std::string> items;
    
public:
    Player(Zoo*);
    ~Player();
    //void testingPlayer();
    Zoo* getLocation();
    void setLocation(Zoo*);
    void addItem(std::string);
    //void displayItems();
    std::vector<std::string> displayItems();

    
    

    

    
    
   
};
#endif


    
    
    
