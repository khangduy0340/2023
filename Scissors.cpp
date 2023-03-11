#include "Scissors.h"
using namespace std;

Scissors::Scissors(){moveName="Scissors";};

string Scissors::getName() {return moveName; };
vector <string> Scissors::getVector(){
    vector <string> winVector = {"Paper"};
        return winVector;};