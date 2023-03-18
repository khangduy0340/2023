#include "Reverser.h"
#include <string>
using namespace std;
int reverseDigit(int value, int fiValue)
{

    // Base case

    if (value == 0)
    {
        return fiValue;
    };

    // non-base case
    fiValue = fiValue * 10 + value % 10;
    return reverseDigit(value / 10, fiValue);
}

int reverseDigit(int value)
{
    // Validate input
    if (value < 0)
    {
        return -1;
    };
    return reverseDigit(value, 0);
}

string reverseString(string characters, string rString)
{

    // Base case
    if (characters.length() == 0)
    {
        return rString;
    };
    // non Base case
    rString = rString + characters.substr(characters.length() - 1, 1);
    characters.pop_back(); // current string but minus last character
    return reverseString(characters, rString);
};

string reverseString(string characters)
{
    return reverseString(characters, "");
}

// rS(khang) -> g
// rS(khan) -> n
// rs(kha) -> a
// rs(kh) -> h
// rs(k) -> k
// rs(a) -> ""
// Logic
// 12345 /10 *%10