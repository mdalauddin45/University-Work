#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int pregift = 1;
        bool ans = true;
        for(int i=1;i<=7;i++){
            if(x>=pregift*2){
                x-=pregift*2;
                pregift*=2;
            }else{
                ans=false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}