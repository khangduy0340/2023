#include "Rock.h"
using namespace std;

Rock::Rock(){
    moveName = "Rock";
    std::vector <std::string> checkVector = {"Scissor"};
};

string Rock::getName() { return moveName; };

bool Rock::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};