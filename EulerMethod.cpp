#include <iostream>
#include <cmath>

using namespace std;

float func(float x, float y)
{
    return x * x * x + y;
}

int main()
{
    float a, b, x, y, h, t;
    cout << "Enter the value of x0, y0, h, and xn: ";
    cin >> a >> b >> h >> t;

    x = a;
    y = b;

    while (x < t)
    {
        y = y + h * func(x, y);
        x = x + h;

        cout << "x=" << x << "\t y=" << y << endl;
    }

    return 0;
}
