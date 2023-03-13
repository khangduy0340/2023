#ifndef WINNER_H
#define WINNER_H
#include "Move.h"
class Winner{
  public: 
    Winner();
    int getWinner(Move* move1, Move* move2);
  
};
#endif