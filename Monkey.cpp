#include "Monkey.h"
using namespace std;

Monkey::Monkey(){
    moveName = "Monkey";
    std::vector <std::string> checkVector = {"Ninja","Robot"};
};

string Monkey::getName() { return moveName; };

bool Monkey::isWinning(std::string inputMove){  
return cMove->checkMove(checkVector,inputMove);};