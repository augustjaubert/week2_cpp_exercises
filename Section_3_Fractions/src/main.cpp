#include <iostream>
#include "Fraction.h"

int main(){
    Fraction frac(8,4);
    std::cout << frac.toString() << std::endl;
    return 0;
}