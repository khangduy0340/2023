#include "Referee.h"
#include "Player.h"

#include "Human.h"
#include "Computer.h"
using namespace std;

int main(){
    Human* p1 = new Human();
    Computer* cmp = new Computer();
    Human* p2 = new Human();
    Computer* cmp2 = new Computer();
    Referee* r = new Referee();
    Player* winner = r->refGame(p1,cmp);
    winner = r->refGame(p2,cmp2);

   if(winner==nullptr){cout << "Tie";return 0;};
   cout << "The winner is: "<<winner->getName();     
   
return 0;
}