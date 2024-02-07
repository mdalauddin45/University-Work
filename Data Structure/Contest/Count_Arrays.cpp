#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 998244353;
const ll INF = LLONG_MAX;


ll poww(ll x, ll y) {
    ll Res = 1;
    while (y) {
        if (y & 1) {
            Res *= x;
            Res %= MOD;
        }
        x *= x;
        x %= MOD;
        y /= 2;
    }
    return Res;
}

void sol() {
    ll n, k;
    cin >> n >> k;
    if (k == 0) {
        cout << 1;
        return;
    }
    ll che = poww(2, n - 1);
    che= poww(che, k);
    cout << che;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        sol();
        cout << endl;
    }
    return 0;
}