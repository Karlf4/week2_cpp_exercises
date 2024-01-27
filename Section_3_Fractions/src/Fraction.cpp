#include "Fraction.h"

void Fraction::simplify() {
    u_int newa = num;
    u_int newb = denom;

    if (newb == 0) {
        // Handle the case where the denominator is zero
        // This scenario might require special handling based on your application's requirements
        return;
    }

    if (newa == 0) {
        // If the numerator is zero, the fraction is 0 and doesn't need further simplification
        return;
    }

    // Proceed with GCD calculation
    u_int remainder = 1;
    while (remainder != 0) {
        remainder = newa % newb;
        newa = newb;
        newb = remainder;
    }

    num /= newa;
    denom /= newa;

    // simpler gcd in solutions
}

/* or
Fraction::Fraction(int a, int b) : num(a), denom(b)
{
    simplify();
}
*/

Fraction::Fraction(int a, int b)
{
    num = a;
    denom = b;

    simplify();

}


Fraction Fraction::reciprocal() {
    return Fraction(denom, num);
}

Fraction Fraction::multiply(int multiplier) {
    return Fraction(num * multiplier, denom);
}

double Fraction::toDouble(){
    
    double result = static_cast<double>(num) / static_cast<double>(denom);
    return result;
}

std::string Fraction::toString() {
    if (num == 0){
        return "0";
    }

    else {
        return std::to_string(num) + "/" + std::to_string(denom);
    }
}