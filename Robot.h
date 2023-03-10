#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"



class Robot : public Move {
 public:
  Robot();
  std::string getName();
  std::vector <std::string> getVector();
};  
#endif