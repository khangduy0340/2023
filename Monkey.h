#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"


class Monkey : public Move {
 public:
  Monkey();
  std::string getName();
  std::vector <std::string> getVector();
};  
#endif