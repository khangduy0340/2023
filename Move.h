#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>
#include <vector>

class Move {
    protected:
        // Name of the move
        std::string moveName;
        std::vector <std::string> checkVector;
    public:
        Move();
        std::string virtual getName()=0; // Pure virtual function
        bool virtual isWinning(std::string moveName)=0;
        
       
};


#endif