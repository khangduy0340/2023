#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Computer.h"
#include "Move.h"
#include "Player.h"
class Referee
{
    public:
    Referee();
    Player* refGame(Player *player1, Player *player2);
};
  
#endif