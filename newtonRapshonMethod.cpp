#include <iostream>
#include <cmath>

using namespace std;

float function(float x)
{
    return x * x + 2 * x - 2;
}

float d_function(float x)
{
    return 2 * x + 2;
}

int main()
{
    float x = 2;

    for (int i = 0; i < 20; i++)
    {
        x = x - (function(x) / d_function(x));


    }
    cout<< "root is " <<x;

    return 0;
}
