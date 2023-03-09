#include "Move.h"
using namespace std;

Move::Move(){
    moveName = "Default";
    vector <string> checkVector ={};
}; // default constructor

string Move::getName(){return moveName;};
bool Move::isWinning(string moveName) { return false; };

// Checking function that doing the checking part
bool checkingMove(vector<string> checkVector,string inputMove){
     int count = checkVector.size();
     for(int i = 0;i<count;i++){
        if(inputMove == checkVector[i]){
            return true;
        }};
            return false;
};


