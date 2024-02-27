#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
#define power(a, b) pow(a, b) 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve() {
    int a, b, l;
    cin >> a >> b >> l;
    int loop_a = log(l) / log(a);
    int loop_b = log(l) / log(b);
    set<int> s;
    for (int i = 0; i <= loop_a + 1; ++i) {
        for (int j = 0; j <= loop_b + 1; ++j) {
            int a_new = pow(a, i);
            int b_new = pow(b, j);
            int prod = a_new * b_new;
            if (l >= prod && l % prod == 0) {
                s.insert(prod);
            }
        }
    }
    cout << s.size() << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}
