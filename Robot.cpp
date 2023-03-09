#include "Robot.h"
using namespace std;

Robot::Robot(){
    moveName = "Robot";
    std::vector <std::string> checkVector = {"Ninja","Zombie"};
};

string Robot::getName() { return moveName; };

bool Robot::isWinning(std::string inputMove){
return cMove->checkMove(checkVector,inputMove);};