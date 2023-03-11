#include "Referee.h"
using namespace std;
Referee::Referee(){};
Player* Referee::refGame(Player *player1, Player *player2){
        cout << "Called "; 
    // Create 2 variables that take in 2 moves
        Move * move1 = player1->makeMove();
        Move * move2 = player2->makeMove();
        
        Player *player3 = new Human("Tie");
        
        // Case tie as 2 moves are the same
        if(move1->getName()==move2->getName()){cout << "Tie!";return nullptr;};
        vector <string> k = move1->getVector();
       
        // Run function that decide which player will win
        bool winner = move1->isWinning(move2->getName(),move1->getVector());

        // Case move2 inside move1 winning list
        // move1 win -> player1 win
        if(winner){return player1;};

        
        // As if those two conditions are not passed then player 2 is won
        return player2;
}
