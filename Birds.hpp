
/*********************************************************************
** Program FileName:  Birds.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Birds header file
** Input:
** Output:
*********************************************************************/


/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2017
**  Description:  Birds header file
**************************************/

#ifndef BIRDS_HPP
#define BIRDS_HPP


#include <string>
#include <vector>
#include "Concessions.hpp"   

class Birds : public Zoo
{
    protected:
        bool training ;

public:
        Birds();
        ~Birds();
        void interact(std::vector<std::string>& inventoryIn);
        std::string getItem();
        std::string getName();


};
#endif


    
    
    
