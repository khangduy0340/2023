#include "Move.h"
using namespace std;
// default constructor that set moveName to default
Move::Move(){
    moveName = "Default";
}; 


bool Move::isWinning(string moveName,vector<string> winVector) { 
    int count = winVector.size();
    for (int i = 0; i < count; i++) {
        // Paper -> Rock as Rock inside Paper's winVector
        // if the opposite move is insde the winVector then the move is winning against it
        if (moveName == winVector[i]) {
            return true;
        }
    };
        return false;
};


