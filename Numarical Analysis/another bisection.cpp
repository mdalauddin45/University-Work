#include<bits/stdc++.h>
using namespace std;
#define f(x) 3*x-cos(x)-1
int main()
{
    int a,b,fa,fb,c,fc;
    cin>>a>>b;
    fa=f(a);
    fb=f(b);
    if(fa*fc>0) cout<<"Incorrect initial guess";
    else{
        c=(a+b)/2;
        fc=f(c);
        if(fa*fc>0){
            a=c;
            fa=fc;
        }else{
            b=c;
            fb=fc;
        }
    }
    while (fabs(fc)>0.01); 
    cout<<"Root is "<<c<<endl;
    return 0;
}