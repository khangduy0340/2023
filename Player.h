#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player{
    protected:
        char move;
        
    public:
        std::string name;
        Player();
        virtual char makeMove();
        virtual std::string getName();
};

#endif