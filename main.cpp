#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;


int main() {
Referee* referee = new Referee();
Player* human = new Human();
Player* computer = new Computer();
Player* winner;

winner = referee->refGame(human, computer);

cout << " " << winner->getName();
return 0;
}