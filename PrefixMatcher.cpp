#include "PrefixMatcher.h"
#include "Trie.h"
#include <iostream>
using namespace std;

PrefixMatcher::PrefixMatcher() {
    root = new Trie();
}
void PrefixMatcher::insert(string address, int routerNumber) {
    Trie* currNode = root;
    for (char c : address) {
        if (currNode->children.find(c) == currNode->children.end()) {
            currNode->children[c] = new Trie();
        }
        currNode = currNode->children[c];
    }
    currNode->routerNo = routerNumber;
}
int PrefixMatcher::selectRouter(string networkAddress){
    Trie* currNode = root;
    int result = -1;
    for (char c : networkAddress) {
        if (currNode->routerNo!=0){
           result=currNode->routerNo;
        }
        if (currNode->children.find(c) == currNode->children.end()) {
            break;
        }
        currNode = currNode->children[c];
        
    }
    return result;
}

