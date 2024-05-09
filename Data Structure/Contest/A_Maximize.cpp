#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N=1e5+7;
int nums[N];
 
#define cn(n)           cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
    Alauddin
    w(t){
        ll n;
        cin >> n;
        int g = 0, ans = 1;
        for(ll i = 1; i < n; i++) {
            int g1 = gcd(n, i) + i;
            if(g1 > g) {
                g = g1;
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}