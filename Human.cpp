#include "Human.h"
#include <iostream>
#include "roleList.h"
using namespace std;

Human::Human(){pName="Human";};

Human::Human(string iName){this->pName=iName;};
    Move* Human::makeMove() { 
        string move;
        cin >> move; 
        if(move == "Rock"){return new Rock();};
        if(move == "Paper"){return new Paper();};
        if(move == "Scissors"){return new Scissors();};
        if(move == "Ninja"){return new Ninja();};
        if(move == "Pirate"){return new Pirate();};
        if(move == "Zombie"){return new Zombie();};
        if(move == "Monkey"){return new Monkey();};
        if(move == "Robot"){return new Robot();};
        return nullptr; 
    }

string Human::getName(){return pName;};

    