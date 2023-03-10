#ifndef SCISSOR_H
#define SCISSOR_H
#include "Move.h"


class Scissor: public Move {
 public:
  Scissor();
  std::string getName();
  std::vector <std::string> getVector();
}; 
#endif

