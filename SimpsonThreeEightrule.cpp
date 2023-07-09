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
    cout << "Enter the number of subintervals (must be a multiple of 3): ";
    cin >> n;

    if (n % 3 != 0)
    {
        cout << "Number of subintervals must be a multiple of 3." << endl;
        return 0;
    }

    h = (b - a) / n;

    for (int i = 1; i < n; i++)
    {
        x = a + i * h;
        if (i % 3 == 0)
        {
            sum += 2 * func(x);
        }
        else
        {
            sum += 3 * func(x);
        }
    }

    sum = ((3 * h) / 8) * (func(a) + func(b) + sum);
    cout << "\nArea is: " << sum << "\n\n";

    return 0;
}
