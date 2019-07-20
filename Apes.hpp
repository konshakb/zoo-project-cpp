
/*********************************************************************
** Program FileName:  Apes.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Apes header files
** Input:
** Output:
*********************************************************************/




/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2017
**  Description:  Apes header file
**************************************/

#ifndef APES_HPP
#define APES_HPP


#include <string>
#include <vector>

class Apes : public Zoo
{
    protected:
        bool caged;

public:
        Apes();
        ~Apes();
        void interact(std::vector<std::string>& inventoryIn);
        std::string getItem();
        std::string getName();


};
#endif


    
    
    
