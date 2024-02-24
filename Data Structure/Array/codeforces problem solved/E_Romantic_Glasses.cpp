#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    w(t){
        int n;
        cin >> n;
        ll arr[n];
        REP(i,0,n-1) cin >> arr[i];
        ll odd=0, even=0;
        unordered_map<ll, ll>mp;
        bool ans=false;
        for(int i=0; i<n; i++){
            if(i&1) even+=arr[i];
            else odd+=arr[i];

            ll diff=odd-even;
            if(even==odd){
                ans = true;
                break;
            }
            if(mp.find(diff)!=mp.end()){
                ans=true;
                break;
            }
            mp[diff]=1;
        }
        
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}