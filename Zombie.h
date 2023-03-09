#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include "checkingMove.h"

class Zombie: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Zombie();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif