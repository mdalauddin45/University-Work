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

int main()
{
    Alauddin
    ll n, m, a; cin >> n >> m >> a;
    ll ans = ceil((double)n / a) * ceil((double)m / a);
    cout << ans << endl; 

    return 0;
}