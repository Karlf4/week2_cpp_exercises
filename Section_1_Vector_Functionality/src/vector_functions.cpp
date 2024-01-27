#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> &v) //& not to create a copy and save memory
{
    int numevents = std::count_if(v.begin(), v.end(), [](int x){return x%5 == 0;});

    return numevents;
}


/* std::vector<int> addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
    return v;
} */

void addElements(std::vector<int> &v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}