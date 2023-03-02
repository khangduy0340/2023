#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;

Referee::Referee(){};

Player* Referee::refGame(Player *player1, Player *player2){ 
        char p1 = player1->makeMove();
        char p2 = player2->makeMove();
        if(p1=='S'){return player2;}
        if (p1=='P'){return player1;};
        return nullptr;
    }
