#pragma once
#include <string>
/*
class Fraction
{
public:
    Fraction(int a, int b);

    int reciprocal(int a, int b);

    int multiply(int c);

    double toDouble();

    std::string toString();

    int a;
    int b;
};
*/

class Fraction
{
private:
    int numerator;
    int denominator;

    Fraction Simplify();

public:
    Fraction(int a, int b);

    Fraction reciprocal() const;
    Fraction multiply(int a) const;

    double toDouble() const;

    std::string toString() const;


    
};