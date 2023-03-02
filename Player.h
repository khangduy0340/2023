#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player{
    protected:
        char move;
        std::string name;
    public:
        Player();
        virtual char makeMove();
        virtual std::string getName();
};

#endif