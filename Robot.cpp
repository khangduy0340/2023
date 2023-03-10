#include "Robot.h"
using namespace std;

Robot::Robot(){moveName="Robot";};

string Robot::getName() {return moveName; };
vector <string> Robot::getVector(){
    vector <string> winVector = {"Ninja","Zombie"};
        return winVector;};