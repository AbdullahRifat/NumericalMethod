#include<bits/stdc++.h>

#define f(x)  x*x*x-2*x-5

using namespace std;

int main() {
    float a, b, c, fa, fb, fc, e;
    int maxitr, i;

    cout << "Enter two initial starting roots: ";
    cin >> a >> b;

    cout << "Enter maximum iteration: ";
    cin >> maxitr;

    cout << "Enter the tolerance value: ";
    cin >> e;

    fa = f(a);
    fb = f(b);
   
        for (i = 1; i <= maxitr; i++) {
            c = (a * fb - b * fa) / (fb - fa);
            fc = f(c);
            if (fabs(fc) < e) {
                cout << "Root of the given equation = " << c << endl;
                maxitr = i;
                break;
            } else if (fc * fa < 0) {
                b = c;
                fb = fc;
            } else {
                a = c;
                fa = fc;
            }
        }
    cout << "Root of the given equation = " << c << endl;
    
    return 0;
}

