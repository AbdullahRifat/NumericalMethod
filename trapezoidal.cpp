#include <iostream>
#include <cmath>

using namespace std;

float func(float x)
{
    return 1 / (x * x + 1);
}

int main()
{
    float a, b, h, n, sum = 0, x;
    cout << "Enter the lower limit: ";
    cin >> a;
    cout << "Enter the upper limit: ";
    cin >> b;
    cout << "Enter the number of subintervals: ";
    cin >> n;

    h = (b - a) / n;

    for (int i = 1; i < n; i++)
    {
        x = a + i * h;
        sum += func(x);
    }

    sum = (h / 2) * (func(a) + func(b) + 2 * sum);
    cout << "\nArea is: " << sum << "\n";

    return 0;
}
