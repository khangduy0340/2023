#include "Rock.h"
using namespace std;

Rock::Rock(){moveName="Rock";};

string Rock::getName() {return moveName; };
vector <string> Rock::getVector(){
    vector <string> winVector = {"Scissor"};
        return winVector;};
