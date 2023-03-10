#include "Move.h"
using namespace std;

Move::Move(){
    moveName = "Default";
}; 
bool Move::isWinning(string moveName,vector<string> winVector) { 
    int count = winVector.size();
    for (int i = 0; i < count; i++) {
        if (moveName == winVector[i]) {
        return true;
        }
    };
    return false;
};


