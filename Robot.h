#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include "checkingMove.h"

class Robot: public Move{
    protected:
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Robot();
        checkingMove* cMove;
        std::string getName();
        bool isWinning(std::string inputMove); 
        
};   
#endif