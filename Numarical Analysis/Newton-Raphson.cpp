#include<bits/stdc++.h>
using namespace std;

// #define f(x) (3*x - cos(x) - 1)
// #define df(x) (3 + sin(x))
#define f(x) ((x)*(x)*(x) - 2*(x) - 5)
#define df(x) (2*x*x-2)

int main()  
{
    int i = 0;
    float x0, x1, epsilon = 0.01;
    cin >> x0;
    do {
        x1 = x0 - f(x0) / df(x0);
        i++;
        x0 = x1; 
    } while(fabs(f(x1)) > epsilon); 
    cout << fixed << setprecision(2);
    cout << "Root is " << x1 << endl;
    cout << "Iterations: " << i << endl;

    return 0;  
}
