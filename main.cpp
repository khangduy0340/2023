#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;


int main() {
Referee* referee = new Referee();
Player* human = new Human("Khang");
Player* computer = new Computer();
Player* winner;

winner = referee->refGame(computer, human);

cout << "   " << winner->getName();
return 0;
}