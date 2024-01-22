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
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}

Fraction Fraction::Simplify() {
    int gcd = std::gcd(numerator,denominator);
    numerator /= gcd;
    denominator /= gcd;
}