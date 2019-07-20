
/*********************************************************************
** Program FileName:  Concessions.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Concessions header file
** Input:
** Output:
*********************************************************************/



/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2017
**  Description:  Concessions header file
**************************************/

#ifndef CONCESSIONS_HPP
#define CONCESSIONS_HPP


#include <string>
#include <vector>
#include "Zoo.hpp"

class Concessions : public Zoo
{
    protected:
        bool line;
        
        
        

public:
        Concessions();
        ~Concessions();
        void interact(std::vector<std::string>& inventoryIn);
        //void setLocation(Zoo* left, Zoo* right, Zoo* up, Zoo* down);
        std::string getName();
        std::string getItem();
        


};
#endif


    
    
    
