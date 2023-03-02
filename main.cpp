#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Player name: "; 
        string pName;
        cin >> pName; 
        Human *human1 = new Human(pName);
        Computer *cmp = new Computer();
        Referee *ref = new Referee();
        Player* p = ref->refGame(human1,cmp);
        cout<<"The winner is: "<< p->getName();
    return 0;
}