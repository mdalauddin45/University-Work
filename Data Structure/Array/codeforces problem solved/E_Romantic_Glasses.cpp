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
        REP(i,0,n-1){
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

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     #ifndef ONLINE_JUDGE
//         freopen("inputf.txt","r",stdin);
//         freopen("outputf.txt","w",stdout);
//     #endif
     
    
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<long long> v(n),pre(n+1,0);
//         set<long long> mpp;
//         mpp.emplace(0);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//             int x=v[i];
//             if(i%2==0){
//                 x= -1*v[i];
//             }
//             pre[i+1]=pre[i]+x;
//             mpp.emplace(pre[i+1]);
//         }
//         bool f=(mpp.size()!=pre.size());
        
//         if(f){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
        
        
//     }
//     return 0;
// }