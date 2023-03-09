#include "Pirate.h"
using namespace std;

Pirate::Pirate(){
    moveName = "Pirate";
    std::vector <std::string> checkVector = {"Robot","Monkey"};
};

string Pirate::getName() { return moveName;};

bool Pirate::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};
