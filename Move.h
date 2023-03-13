#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>
#include <vector>

class Move {
 protected:
  // Each move has a moveName
  std::string moveName;
 public:
  Move();
  std::string virtual getName() = 0; // getMoveName
  std::vector <std::string> virtual getVector()=0; // get the unquie vector

  // Checking whether the selected move win over its opponent
  bool isWinning(std::string moveName,std::vector<std::string> winVector);

};
#endif