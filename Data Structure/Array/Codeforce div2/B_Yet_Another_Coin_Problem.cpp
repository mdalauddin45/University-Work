#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (lli i = a; i <= b; i++)
int coins[] = {15, 10, 6, 3, 1};
int mincoin(int coin) {
    vi dp(coin + 1);
    fill(dp.begin(), dp.end(), 1e9);
    dp[0] = 0;
    REP(i,1,coin) {
        REP(j,0,4){
            if (coins[j] <= i) {
                lli r = dp[i - coins[j]];
                if (r != INT_MAX && r + 1 < dp[i]) dp[i] = r + 1;
            }
        }
    }
    return dp[coin];
}
void solve(){
    lli n;
    cin >> n;
    lli result = 0;

    REP(i,0,4) {
        if (n >= coins[i]) {
            lli total = n / coins[i];
            result = total -1;
            n %= coins[i];
            n += coins[i];
            result += mincoin(n);
            cout << result << endl;
            return;
        }
    }
}
int main() {
    Alauddin
    w(t){
        solve();
    }
    return 0;
}