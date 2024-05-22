#include<bits/stdc++.h>
using namespace std;
// #define f(x) 3*x-cos(x)-1
#define f(x) (x*x*x + 3*x - 5)

int main()
{
    float a,b,fa,fb,c,fc;
    up:
        cin>>a>>b;
        fa=f(a);
        fb=f(b);
        if(fa*fb>0){
            cout<<"Incorrect inital guess";
            goto up;
        }
        do
        {
            c=((a*fb)-(b*fa))/(fb-fa);
            fc=f(c);
            if(fa*fc>0){
                a=c;
                fa=fc;
            }else{
                b=c;
                fb=fc;
            }
        } while (fabs(fc)>0.01);
        cout<<"root is "<<c<<endl;   
    return 0;
}