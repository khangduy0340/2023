#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;

Referee::Referee(){};

Player* Referee::refGame(Player *player1, Player *player2){ 
        Player* player3 = new Player();
        player3->name = "Tie";
        char p1 = player1->makeMove();
        if(p1=='S'){return player2;}
        if (p1=='P'){return player1;};
        return player3;
    }
