#include <iostream>
#include <cmath>
using namespace std;

#define f(x) (3*x - cos(x) - 1)
#define g(x) (cos(x)/3 + 1/3)

int main() {
    int i= 0;
    float x1, x2;
    up:
        cin >> x1;
        do {
            x2 = g(x1);
            i++;
            if (i > 1000) {
                cout << "The given sequence is not convergent";
                goto up;
            }
            x1 = x2;
        } while (fabs(f(x2)) > 0.01);
        cout << "An approximate solution is " << x2 << "\n";
        return 0;
}
