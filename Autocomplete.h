#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <string>
#include <vector>
#include "Trie.h"

class Autocomplete {
public:
    Autocomplete();
    Trie* root;
    void insert( std::string word);
    std::vector<std::string> getSuggestions( std::string partialWord);
    void traverse(Trie* curr, std::string word, std::vector<std::string>& res);
};

#endif 