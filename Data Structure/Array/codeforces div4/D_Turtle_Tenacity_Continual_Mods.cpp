#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        ll sum=0;
        vector<ll> v1,v2;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            if(x&1){
                v1.push_back(x);
            }else{
                v2.push_back(x);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        int rem=v1[0];
        bool flag=true;
        for(int i=1;i<v1.size() && flag;i++){
            if(rem%v1[i] ==0 ) flag=false;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

     }
    return 0;
}