
/*********************************************************************
** Program FileName:  Zoo.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Zoo header files
** Input:
** Output:
*********************************************************************/


/***********************************
**  Author:  Bryan Konshak
**  Date:  11/30/2016
**  Description:  Zoo 
**************************************/

#ifndef ZOO_HPP
#define ZOO_HPP


#include <string>
#include <vector>

class Zoo
{

protected:
    Zoo* Left;
    Zoo* Right;
    Zoo* Up;
    Zoo* Down;
    Zoo* Same;
    std::string name;
    std::string item = "EMPTY";
    std::vector<std::string> items;
    bool keeperWeak;
    bool winGame;
    
public:
    Zoo();
    ~Zoo();
    virtual void interact(std::vector<std::string>& inventory);
    virtual void setLocation(Zoo* left, Zoo* right, Zoo* up, Zoo* down);
    virtual std::string getName();
    virtual Zoo* moveLeft();
    virtual Zoo* moveRight();
    virtual Zoo* moveUp();
    virtual Zoo* moveDown();
    virtual std::string getItem();
   // virtual void menu();
   // virtual std::string useItem (std::string itemArray[])
    virtual std::vector<std::string> updateItems(std::vector<std::string>& itemIn);
    virtual void displayItems();
    virtual void setKeeperWeak(bool);
    virtual bool getWinGame();

    
    

    

    
    
   
};
#endif


    
    
    
