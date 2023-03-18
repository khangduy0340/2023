#ifndef REVERSER_H
#define REVERSER_H
#include <iostream>

class Reverser{
    public:
        Reverser();
        int reverseDigit(int value);
        std::string reverseString(std::string characters);
};
#endif