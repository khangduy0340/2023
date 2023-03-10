#ifndef ROCK_H
#define ROCK_H
#include "Move.h"


class Rock : public Move {
 public:
  Rock();
  std::string getName();
  std::vector <std::string> getVector();
};  
#endif