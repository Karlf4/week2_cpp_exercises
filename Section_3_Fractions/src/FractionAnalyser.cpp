#include "Fraction.h"
#include <iostream>

int main()
{
    int a, b;
    std::cout << "Please enter two numbers (numerator and denominator) separated by a space" << std::endl;
    std::cin >> a;
    std::cin >> b;

    // Fraction to call the class, then make up any fraction, frac1(a,b), frac2(a,b) etc...
    Fraction frac(a, b);

    std::cout << frac.toString() << " = " << frac.toDouble() << std::endl;
    std::cout << "Fraction multiplied by 3 is " << frac.multiply(3).toString() << "\n";
    std::cout << "Fraction as a decimal is " << frac.toDouble() << "\n";
    std::cout << "Fraction reciprocal is " << frac.reciprocal().toString() << "\n";


    
    return 0;
}