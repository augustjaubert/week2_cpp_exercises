#include "Fraction.h"
#include <numeric>

Fraction::Fraction(int a, int b) : numerator(a), denominator(b)
{
    Simplify();
}

Fraction Fraction::reciprocal() const
{
    return Fraction(denominator, numerator);
}

Fraction Fraction::multiply(int a) const
{
    return Fraction(numerator * a, denominator);
}

double Fraction::toDouble() const
{
    return (double)numerator / (double)denominator;
}

std::string Fraction::toString() const
{
    if (numerator == 0)
        return "0";
    else
        return std::to_string(numerator) + "/" + std::to_string(denominator);
}

void Fraction::Simplify() {
    int commonDivisor = std::gcd(numerator,denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}