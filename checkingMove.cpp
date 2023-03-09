
#include "checkingMove.h"
using namespace std;

checkingMove::checkingMove(){};
bool checkingMove::checkMove(vector<string> checkVector,string inputMove){
     int count = checkVector.size();
     
     for(int i = 0;i<count;i++){
        if(inputMove == checkVector[i]){
            return true;
        }};
    return false;

}