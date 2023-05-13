#include "Autocomplete.h"
#include "Trie.h"
#include <iostream>
using namespace std;
Autocomplete::Autocomplete() {
    root = new Trie();
}
void Autocomplete::insert(string word) {
    Trie* currNode = root;
    for (char c : word) {
        if (currNode->children.find(c) == currNode->children.end()) {
            currNode->children[c] = new Trie();
        }
        currNode = currNode->children[c];
    }
    currNode->isEnd = true;
}
void Autocomplete::traverse(Trie* currNode,string word,vector<string>& res) {
    if (currNode->isEnd) {
        res.push_back(word);
    }
    for (auto it : currNode->children) {
        word.push_back(it.first);
        traverse(it.second, word, res);
        word.pop_back();
    }
}
vector<string> Autocomplete::getSuggestions(string partialWord) {
   vector<string> res;
    Trie* currNode = root;
    for (char c : partialWord) {
        if (currNode->children.find(c) == currNode->children.end()) {
            return res;
        }
       currNode = currNode->children[c];
    }
    traverse(currNode, partialWord, res);
    return res;
}
