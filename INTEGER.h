#include <iostream>
using namespace std;

#ifndef INTEGER_H
#define INTEGER_H

class INTEGER
{
private:
    int entero;

public:
    INTEGER();
    INTEGER(int);
    void operator<<(int);
    void operator<<(INTEGER );
    void operator!();
    INTEGER operator*(INTEGER);
    INTEGER operator/(INTEGER);
    INTEGER operator+(INTEGER);
    INTEGER operator-(INTEGER);
};
#endif