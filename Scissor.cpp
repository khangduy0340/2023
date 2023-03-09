#include "Scissor.h"
using namespace std;

Scissor::Scissor(){
    moveName = "Scissor";
    std::vector <std::string> checkVector = {"Paper"};
};

string Scissor::getName() { return moveName; };

bool Scissor::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};