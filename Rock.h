#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include "checkingMove.h"

class Rock: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Rock();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif