
/*********************************************************************
** Program FileName:  Giraffes.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Giraffes header file
** Input:
** Output:
*********************************************************************/





/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2017
**  Description:  Giraffes header file
**************************************/

#ifndef GIRAFFES_HPP
#define GIRAFFES_HPP


#include <string>
#include <vector>

class Giraffes : public Zoo
{
    protected:
        bool hungry;

public:
        Giraffes();
        ~Giraffes();
        void interact(std::vector<std::string>& inventoryIn);
        std::string getItem();
        std::string getName();


};
#endif


    
    
    
