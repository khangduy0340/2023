#include "Referee.h"
#include "Player.h"
#include "Human.h"
using namespace std;

int main(){
    Human* p1 = new Human("Khang");
    Human* p2 = new Human("Alfred");
    Referee* r = new Referee();
    Player* p = r->refGame(p1,p2);
 
   if(p==nullptr){cout << "Tie";return 0;};
   cout << "The winner is: "<<p->getName();
return 0;
}