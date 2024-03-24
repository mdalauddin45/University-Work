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
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    ll sum=0;
    REP(i,0,n-1){
        cin>>v[i];
        sum+=v[i];
    }
    ll ma =0;
    sort (v.begin(),v.end());

    vector<ll>p(n+1,0),s(n+1,0);

    p[0]=0;

    for(ll i=1;i<=n;i++){
        p[i]=p[i-1]+v[i-1];
    }
    reverse(v.begin(),v.end());
    s[0]=0;
    for(ll i=1;i<=n;i++){
        s[i]=s[i-1]+v[i-1];
    }
    for(ll i=0;i<=k;i++){
        ll left=p[2*1];
        ll right=s[k-i];
        ma=max(ma, sum-(left+right));
    }
    cout<<ma<<endl;

}
int main()
{
    Alauddin
    w(t){
        solve();        
    }
    return 0;
}