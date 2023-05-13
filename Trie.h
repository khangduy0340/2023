#ifndef TRIE_H
#define TRIE_H
#include <vector>
#include <unordered_map>
class Trie{
    public:
        std::unordered_map<char, Trie*> children;
        bool isEnd;
};
#endif