#include <iostream>
using namespace std;

#ifndef STRING_H
#define STRING_H

class STRING
{
private:
    string cadena;

public:
    void operator<<(string);
    void operator<<(STRING);
    STRING operator*(int);
    void operator!();
};
#endif