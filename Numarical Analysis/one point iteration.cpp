#include<bits/stdc++.h>
using namespace std;
// #define f(x) (3*x - cos(x) - 1)
// #define g(x) (cos(x) + 1)/3
#define f(x) ((x)*(x)*(x) - 2*(x) - 5)
#define g(x) cbrt(2*x+5)

int main()
{
    int i = 0;
    float x0, x1, epsilon=0.01;
    cin >> x0;
    do {
        x1 = g(x0); 
        i++;
        x0 = x1;
    } while(fabs(f(x1)) > epsilon); 
    cout << "Root is " << x1  << endl;

    return 0;  
}
