#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Player name: "; // welcome line
        string username;
        cin >> username; // take user name
        Human *user = new Human(username);
        Computer *cmp = new Computer();
        Referee *ref = new Referee();
        Player* p = ref->refGame(user,cmp);
        cout<<"The winner is: "<< p->getName();
    return 0;
}