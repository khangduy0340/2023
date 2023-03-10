#ifndef PAPER_H
#define PAPER_H
#include "Move.h"


class Paper: public Move {
 public:
  Paper();
  std::string getName();
  std::vector <std::string> getVector();
};   
#endif