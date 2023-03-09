#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include "checkingMove.h"

class Monkey: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Monkey();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif