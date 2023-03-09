#ifndef CHECKINGMOVE_H
#define CHECKINGMOVE_H
#include <iostream>
#include <vector>
#include <string>

class checkingMove{
 public:
    checkingMove();
    bool checkMove(std::vector<std::string> checkVector,std::string inputMove);
};
#endif