#pragma once
#include <string>

class Fraction
{
private:
    int num;
    int denom;

    void simplify();

public:
    Fraction(int a, int b);

    Fraction reciprocal();
    Fraction multiply(int a); // or const; not necessary
    double toDouble(); // const;
    std::string toString(); // const;

};