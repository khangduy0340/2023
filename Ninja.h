#ifndef NINJA_H
#define NINJA_H
#include "Move.h"


class Ninja : public Move {
 public:
  Ninja();
  std::string getName();
  std::vector <std::string> getVector();
};  
#endif