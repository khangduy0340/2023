#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"


class Zombie : public Move {
 public:
  Zombie();
  std::string getName();
  std::vector <std::string> getVector();
};  
#endif