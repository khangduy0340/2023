#include "Monkey.h"
using namespace std;

Monkey::Monkey(){moveName="Monkey";};

string Monkey::getName() {return moveName; };
vector <string> Monkey::getVector(){
    vector <string> winVector = {"Ninja","Robot"};
        return winVector;};