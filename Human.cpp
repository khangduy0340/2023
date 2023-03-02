#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(string name1){
    if(name1 == ""){name == "Human";};
    this->name = name;};

string Human::getName(){
        return name;};

char Human::makeMove(){ // to make move function
        cout << this->name << "Enter the move: ";
        cin >> move; 
        return move; 
    }

