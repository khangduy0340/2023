#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>
#include <vector>

class Move {
 protected:
  std::string moveName;
  std::vector<std::string> winVector;

 public:
  Move();
  std::string virtual getName() = 0;
  std::vector <std::string> virtual getVector()=0; 
  bool isWinning(std::string moveName,std::vector<std::string> winVector);
};
#endif