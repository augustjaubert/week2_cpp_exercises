#pragma once
#include <string>

class Fraction
{
private:
    int numerator;
    int denominator;

    void Simplify();

public:
    Fraction(int a, int b);

    Fraction reciprocal() const;

    Fraction multiply(int a) const;

    double toDouble() const;

    std::string toString() const;
};