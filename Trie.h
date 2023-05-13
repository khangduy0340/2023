#ifndef TRIE_H
#define TRIE_H
#include <unordered_map>
#include <vector>
class Trie{
public:
    std::unordered_map<char,Trie*> children;
    bool isEnd;
    int routerNo;
};
#endif 