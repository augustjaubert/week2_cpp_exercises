#include "Fraction.h"

Fraction::Fraction(int a, int b){}

int Fraction::reciprocal(int a, int b)
{
    return b/a;
}

int Fraction::multiply(int c){
    return (a/b) * c;
}

double Fraction::toDouble()
{
    return (double)a/(double)b;
}

std::string Fraction::toString()
{
    std::string output = std::to_string(a) + "/" + std::to_string(b);
    return output;
}