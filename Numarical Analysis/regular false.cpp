#include<bits/stdc++.h>
using namespace std;
#define f(x) 3*x-cos(x)-1
int main()
{
    int i=0;
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
            i++;
        } while (fabs(fc)>0.01);
        cout<<"root is "<<c<<endl;
        cout<<"Step count "<<i<<endl;        
    return 0;
}