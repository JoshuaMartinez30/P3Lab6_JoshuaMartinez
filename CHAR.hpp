#include <iostream>
#include "STRING.hpp"
using namespace std;

#ifndef CHAR_H
#define CHAR_H

class CHAR
{
private:
    char caracter;

public:
    void operator<<(char);
    void operator<<(CHAR);
    STRING operator+(CHAR);
    void operator!();
};
#endif