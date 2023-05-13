#include "Trie.h"
#include <iostream>
#include "Autocomplete.h"
using namespace std;
Autocomplete::Autocomplete(){
    root = new Trie();
}
void Autocomplete::insert(string word){
    Trie* currNode = root;
    for (char c : word){
        if(currNode->children.find(c)==currNode->children.end()){
            currNode->children[c]= new Trie;
        }
        currNode = currNode->children[c];
    }
    currNode->isEnd == true;
}
void Autocomplete::traverse(Trie* currNode, std::string& word, std::vector<std::string>& result){
    if(currNode->isEnd){
        result.push_back(word);
    }
    for(auto it : currNode->children){
        word.push_back(it.first);
        traverse(it.second,word,result);
        word.pop_back();
    }
}
vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> result;
    Trie* currNode = root;
    for (char c: partialWord){
        if(currNode->children.find(c)==currNode->children.end()){
            return result;
        }
        currNode = currNode->children[c];
    }
    traverse(currNode,partialWord,result);
    return result;
}