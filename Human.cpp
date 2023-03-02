#include "Human.h"
#include <iostream>
using namespace std;


Human::Human():Human("Human") {};

Human::Human(std::string name) {this->name = name; };

string Human::getName(){return name;};

char Human::makeMove(){ 
        cout << this->name << "Enter the move: ";
        cin >> move; 
        return move; 
    }

