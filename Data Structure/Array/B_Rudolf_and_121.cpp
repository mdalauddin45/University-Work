#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
void solve(int n,vi v){
    REP(i,0,n-1) cin>>v[i];
        REP(i,0,n-1){
            if(v[i]==0) continue;
            if(v[i-1]*2>v[i]){
                cout<<"NO"<<endl;
                return ;
            }else{
                v[i]-=2*v[i-1];
                v[i+1]-=v[i-1];
                v[i-1]=0;
            }
        }
        for(auto i:v){
            if(i!=0){
                cout<<"NO"<<endl;
                return ;
            }
        }
        cout<<"YES"<<endl;
}
int main()
{
    Alauddin
    w(t){
        int n; cin>>n;
        vi v(n);
        solve(n,v);

    }
    return 0;
}