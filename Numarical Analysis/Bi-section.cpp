#include<bits/stdc++.h>
using namespace std;
#define f(x) (x*x*x + 3*x - 5)
 int main()
{
    float a,b,fa,fb,c,fc;
    up:
        cin>>a>>b;
        fa=f(a);
        fb=f(b);
        if(fa*fb>0){
            cout<<"Incorrect initial guess";
            goto up;
        }
        do{
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