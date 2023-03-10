#include <iostream>
#include "Computer.h"
#include "Rock.h"
using namespace std;

Computer::Computer(){pName="Computer";};
Move* Computer::makeMove(){cout << "Check";return new Rock();};
string Computer::getName(){return pName;};
