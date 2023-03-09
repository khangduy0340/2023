#include "Zombie.h"
using namespace std;

Zombie::Zombie(){
    moveName = "Zombie";
    std::vector <std::string> checkVector = {"Pirate","Monkey"};
};

string Zombie::getName() { return moveName; };

bool Zombie::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};