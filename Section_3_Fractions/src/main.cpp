#include <iostream>
#include "Fraction.h"

int main(){
    Fraction frac(0,5);
    //frac.multiply(3);
    std::cout << frac.toString() << std::endl;
    return 0;
}