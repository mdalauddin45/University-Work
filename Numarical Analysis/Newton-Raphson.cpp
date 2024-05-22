#include<bits/stdc++.h>
using namespace std;

// #define f(x) (3*x - cos(x) - 1)
// #define df(x) (3 + sin(x))
// #define f(x) ((x)*(x)*(x) - 2*(x) - 5)
// #define df(x) (2*x*x-2)
// #define f(x) (x*sin(x)+cos(x))
// #define df(x) (x*cos(x))
#define f(x) (x*x*x -x*x + 2 )
#define df(x) (3*x*x-2*x)

int main()  
{
    float x0, x1;
    cin >> x0;
    do {
        x1 = x0 - f(x0) / df(x0);
        x0 = x1; 
    } while(fabs(f(x1 )) > 0.01); 
    cout << fixed << setprecision(3);
    cout <<x1 << endl;
    
    return 0;  
}
