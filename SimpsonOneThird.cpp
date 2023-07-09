#include <bits/stdc++.h>


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
        if (i % 2 == 0)
        {
            sum = sum + 2 * func(x);
        }
        else
        {
            sum = sum + 4 * func(x);
        }
    }

    sum = h / 3 * (func(a) + func(b) + sum);
    cout << "\nArea is: " << sum << "\n\n";

    return 0;
}
