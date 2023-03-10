#include "Referee.h"
#include "Human.h"
#include "Computer.h"
using namespace std;

int main(){


  Human* p1 = new Human("Khang");
  Human* p2 = new Human("Alfred");
  Referee* r = new Referee();
  Computer* cmp = new Computer();

  Player* p = r->refGame(p1, p2);
  //Player* p = r->refGame(p1, cmp);

  if (p == nullptr) {
    cout << "Tie";
    return 0;
  };

  cout << "The winner is: " << p->getName();
  return 0;
}