#include "Ninja.h"
using namespace std;

Ninja::Ninja(){moveName="Ninja";};

string Ninja::getName() {return moveName; };
vector <string> Ninja::getVector(){
    vector <string> winVector = {"Pirate","Zombie"};
        return winVector;};