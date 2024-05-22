#include<bits/stdc++.h>
using namespace std;
#define f(x) 1/(1+x*x)
// double f (double x){
//     return 1/(1+x*x);
// }
int main(){
    float l,u,y=0.0,h,x;
    int n;
    cin>>l>>u>>n;
    h=(u-l)/n;
    y=(f(l)+f(u))/2.0;
    for(int i=1;i<n;i++){
        x=l+i*h;
        y=y+f(x);
    }
    y=y*h;
    cout<<y<<endl;
    return 0;
}