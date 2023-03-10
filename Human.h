#ifndef HUMAN_H
#define HUMAN_H
#include "Move.h"
#include "Player.h"

class Human: public Player{
    protected:
        std::string pName;
    public:
        Human();
        Human(std::string iName);
        Move* makeMove();
        std::string getName();
};

#endif