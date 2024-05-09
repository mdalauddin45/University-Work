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
void simulate_game() {
    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;

    vi p(n + 1), a(n + 1);

    for (int i = 1; i <= n; ++i) cin >> p[i];
    for (int i = 1; i <= n; ++i) cin >> a[i];

    ll mxx = *max_element(a.begin(), a.end());
    vector<vector<ll>> dp(k + 1, vector<ll>(n + 1));

    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = max(static_cast<int>(dp[i - 1][j]), a[j]);
            if (p[j] != j) dp[i][j] = max(dp[i][j], dp[i - 1][p[j]]);
            if (p[j] != j && p[p[j]] != p[j]) dp[i][j] = max(dp[i][j], dp[i - 1][p[p[j]]]);
        }
    }

    ll bodya = 0, sasha = 0;

    for (int i = 1; i <= k; ++i) {
        bodya += dp[i][pb];
        sasha += dp[i][ps];

        if (dp[i][ps] == mxx && dp[i][pb] == mxx) {
            bodya += (k - i) * mxx;
            sasha += (k - i) * mxx;
            break;
        }
    }

    if (bodya > sasha) cout << "Bodya" << endl;
    else if (sasha > bodya) cout << "Sasha" << endl;
    else cout << "Draw" << endl;
}

int main() {
    Alauddin
    w(t) {
        simulate_game();
    }
    return 0;
}
