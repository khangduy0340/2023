#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Move
{
public:
    string moveName;
    string virtual getName()=0;
    bool virtual isWinning(string moveName)=0;
};


bool checkingMove(vector<string> checkVector,string inputMove){
     int count = checkVector.size();
     for(int i = 0;i<count;i++){
        if(inputMove == checkVector[i]){
            return true;
        }};
            return false;
};

class Rock: public Move{
    public:
    string moveName = "Rock";
    string getName() { return moveName; };
    bool isWinning(std::string inputMove) override{
    vector<string> checkVector = {"Scissor"};
    
    return checkingMove(checkVector,inputMove);
};
};

class Paper: public Move{
    public:
    string moveName = "Paper";
    string getName() { return moveName; };
    bool isWinning(std::string inputMove) override{
    vector<string> checkVector = {"Rock"};
    
    return checkingMove(checkVector,inputMove);
};
};

class Scissor: public Move{
    public:
    string moveName = "Scissor";
    string getName() { return moveName; };
    bool isWinning(std::string inputMove) override{
        vector<string> checkVector = {"Paper"};
        return checkingMove(checkVector,inputMove);
};
};

class Player
{
    public:
    string pName;
    virtual Move* makeMove()=0;
    virtual string getName(){return pName;};
};

class Human: public Player{
    public:
    Human(string name){pName=name;};
    
    Move* makeMove() override { 
        
        string move;
        cout  << "Enter the move: ";
        cin >> move; 
        if(move == "Rock"){return new Rock();};
        if(move == "Paper"){return new Paper();};
        if(move == "Scissor"){return new Scissor();};
        return nullptr; 
    }
};

class Referee
{
    public:
    Player* refGame(Player *player1, Player *player2){ 
    // Create 2 variables that take in 2 moves
        Move * move1 = player1->makeMove();
        Move * move2 = player2->makeMove();
        
       
        // Case tie as 2 moves are the same
        if(move1->getName()==move2->getName()){return nullptr;};
        
        // Run function that decide which player will win
        bool winner = move1->isWinning(move2->getName());

        // Case move2 inside move1 winning list
        // move1 win -> player1 win
        if(winner){return player1;};

        // As if those two conditions are not passed then player 2 is won
        return player2;
}
};

int main(){
    Player* p1 = new Human("Khang");
    Player* p2 = new Human("Alfred");
    Referee* r = new Referee();

    Player* p = r->refGame(p1,p2);
 
   if(p==nullptr){cout << "Tie";return 0;};
   cout << "The winner is: "<<p->getName();
return 0;
}