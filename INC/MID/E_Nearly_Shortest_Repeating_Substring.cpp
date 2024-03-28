#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           cin>>n;
#define w(t)            ll t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
ll solve(string s, ll n, ll mid) {
    ll cnt = 0;
    for (ll i = 0; i < mid; i++) {
        ll max_count = 0, total = 0;
        vector<ll> hash(26, 0);
        for (ll j = i; j < n; j += mid) {
            hash[s[j] - 'a']++;
            max_count = max(max_count, hash[s[j] - 'a']);
            total++;
        }
        cnt += (total - max_count);
    }
    return cnt <= 1;
}

int main() {
    w(t){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll ans = n;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (solve(s, n, i)) ans = min(ans, i);
                if (solve(s, n, n / i)) ans = min(ans, n / i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}