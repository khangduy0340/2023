#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
#include "checkingMove.h"

class Paper: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Paper();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif