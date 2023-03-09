#include "Paper.h"
using namespace std;

Paper::Paper(){
    moveName = "Paper";
    std::vector <std::string> checkVector = {"Rock"};
};

string Paper::getName() { return moveName; };

bool Paper::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};