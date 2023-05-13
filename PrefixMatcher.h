#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <vector>
#include "Trie.h"

class PrefixMatcher
{
public:
    PrefixMatcher();
    Trie *root;
    int selectRouter(std::string networkAddress);
    void insert(std::string address, int routerNumber);
};
#endif