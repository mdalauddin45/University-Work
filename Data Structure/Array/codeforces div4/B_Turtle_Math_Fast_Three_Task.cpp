#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        ll int sum=0;
        vector<ll int> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
            sum = sum + v[i];
        }
     
        if(sum % 3 == 0){
                cout<<0<<endl;
            }else{
                int mincng = sum %3 == 1?2:1;
                for(auto it: v){
                    int tmpsum = sum-it;
                    int cng = 0;
                    if(tmpsum %3 ==0)cng = 1;
                    else{
                        cng= tmpsum%3 == 1?2:1;
                        cng++;
                    }
                    mincng = min(cng,mincng);
                }
                cout<<mincng<<endl;
            }
    }
    return 0;
}