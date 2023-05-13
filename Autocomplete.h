#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <vector>
#include <unordered_map>
#include <string>
#include "Trie.h"

class Autocomplete{
    public:
        Autocomplete();
        Trie* root;
        void insert(std::string word);
        std::vector<std::string> getSuggestions(std::string partialWord);
        void traverse(Trie* curr, std::string& word, std::vector<std::string>& res);
};
#endif  