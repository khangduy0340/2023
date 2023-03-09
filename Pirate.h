#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
#include "checkingMove.h"

class Pirate: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Pirate();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   

#endif