#ifndef SCISSOR_H
#define SCISSOR_H
#include "Move.h"
#include "checkingMove.h"

class Scissor: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Scissor();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif