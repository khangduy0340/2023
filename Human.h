#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
using namespace std;

class Human:public Player {
public:
    Human();
    Human(string name1);
    char makeMove();
    string getName();
};


#endif