#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,v,b) for (int i = v; i <= b; i++)
ll solve(vi v) {
    ll sum = 0;
    ll n = v.size();
    REP(i,0,n-1) sum += max(v[i], v[(i + 1) % n]); 
    return sum;
}
int main()
{
    Alauddin
    w(t){
        ll n; cin >> n;

        ll ans = (n * (n + 1) / 2) + n - 1;

        cout << ans << endl;
    }
    return 0;
}