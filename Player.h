#ifndef PLAYER_H
#define PLAYER_H
#include "Move.h"

class Player{
    protected:
        std::string pName;
     public:
        Player();
        virtual Move* makeMove();
        virtual std::string getName()=0;
};

#endif