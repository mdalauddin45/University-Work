#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return 1/(1+x*x);
}
int main()
{
    float upper,lower,n=6,y=0.0, h,x;
    cout<<"Enter the upper value ";
    cin>>upper;
    cout<<"Enter the lower value ";
    cin>>lower;
    h=(upper-lower)/n;
    y=(f(lower)+f(upper))/2;
    for(int i=1;i<=n-1;i++){
        x=lower+i*h;
        y=y+f(x);
    } 
    y=y*h;
    cout << y << endl;
    return 0;
}