#include "Referee.h"
#include "Winner.h"
using namespace std;
Referee::Referee(){};
 Player* Referee::refGame(Player* player1, Player* player2) {
    // Create 2 variables that take in 2 moves
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    // Create an object w 
    Winner w;
    // An array that take in player1, player2
    // Return the reference corresponding to the winner
    vector <Player*> playerVector = {player1,player2,nullptr};
    Player* winner = playerVector[w.getWinner(move1,move2)];
    return winner;
}
