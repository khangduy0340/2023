#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
#include "checkingMove.h"

class Ninja: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Ninja();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif