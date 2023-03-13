#include "Winner.h"
using namespace std;

Winner::Winner(){}

int Winner::getWinner(Move* move1, Move* move2){
     if (move1->getName() == move2->getName()) {
      cout <<"Tie";
      return 2;};
      bool winner = move1->isWinning(move2->getName(),move1->getVector());
      if(winner){return 0;};
      return 1;
    };