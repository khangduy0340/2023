#include "Ninja.h"
using namespace std;

Ninja::Ninja(){
    moveName = "Ninja";
    std::vector <std::string> checkVector = {"Pirate","Zombie"};
};

string Ninja::getName() { return moveName; };

bool Ninja::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};