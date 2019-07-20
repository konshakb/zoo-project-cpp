
/*********************************************************************
** Program FileName: FrontGate.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:FrontGate header file
** Input:
** Output:
*********************************************************************/




/***********************************
**  Author:  Bryan Konshak
**  Date:  10/25/2017
**  Description:  FrontGate header file
**************************************/

#ifndef FRONTGATE_HPP
#define FRONTGATE_HPP


#include <string>
#include <vector>

class FrontGate : public Zoo
{
    protected:

public:
        FrontGate();
        ~FrontGate();
        void interact(std::vector<std::string>& inventoryIn);
        bool getWinGame();
        std::string getName();


};
#endif


    
    
    
