#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here
int countMultiplesOfFive(std::vector<int> inputVector)
{    
    return std::count_if(inputVector.begin(), inputVector.end(), [](int x){return x%5 == 0;});
}

void addElements(std::vector<int> v, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}