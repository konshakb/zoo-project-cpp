
/*********************************************************************
** Program FileName:  Elephants.hpp
** Author: Bryan Konshak
** Date:  12/4/2016
** Description:  Elephants header file
** Input:
** Output:
*********************************************************************/





#ifndef ELEPHANTS_HPP
#define ELEPHANTS_HPP


#include <string>
#include <vector>

class Elephants : public Zoo
{
    protected:
        bool gotBucket;
        

public:
        Elephants();
        ~Elephants();
        void interact(std::vector<std::string>& inventory);
        std::string getItem();
        std::string getName();

};
#endif


    
    
    
