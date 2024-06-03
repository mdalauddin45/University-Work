#include<bits/stdc++.h>
using namespace std;
#define f(x) (3*x - cos(x) - 1)
#define g(x) (cos(x) + 1)/3
int main()
{
    float x0, x1;
    cin >> x0;
    do {
        x1 = g(x0); 
        x0 = x1;
    } while(fabs(f(x1)) > 0.01); 
    cout << "Root is " << x1  << endl;

    return 0;  
}
