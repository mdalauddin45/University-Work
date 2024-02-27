#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;

#define testcases       int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    Alauddin
    int n, W;  // Changed variable name from w to W
    cin >> n >> W;

    vi a(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double min_girl_cup = a[0];
    double min_boy_cup = a[n];

    double max_water = min(min_girl_cup, min_boy_cup / 2.0) * 3 * n;
    if (max_water <= W) {
        cout << max_water << endl;
    } else {
        cout << fixed;
        cout.precision(6);
        cout << W << endl;
    }
    return 0;
}
