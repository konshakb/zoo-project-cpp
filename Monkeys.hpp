
/*********************************************************************
** Program FileName:  Monkeys.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Monkeys header file
** Input:
** Output:
*********************************************************************/



/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2017
**  Description:  Monkeys header file
**************************************/

#ifndef MONKEYS_HPP
#define MONKEYS_HPP


#include <string>
#include <vector>

class Monkeys : public Zoo
{
    protected:
        bool filledBucket;

public:
        Monkeys();
        ~Monkeys();
        void interact(std::vector<std::string>&);
        std::string getItem();
        std::string getName();


};
#endif


    
    
    
