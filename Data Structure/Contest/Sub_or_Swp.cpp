#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        while (x!=0){
            y%=x;
            swap(x,y);
        }
        cout<<y<<endl;
        
    }
    
    return 0;
}