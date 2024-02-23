#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;

#define w(x)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b)      for (int i = a; i <= b; i++)

int main() {
    w(t) {
        int n, d;
        cin >> n >> d;
        vi edges(n);
        REP(i, 0, n - 1) cin >> edges[i];

        auto isPossibleToConstructTree = [&](int n, int d, const vi& lengths) {
            if (lengths.size() != n) {
                return false;
            }
            for (int i = 0; i < n; ++i) {
                if (lengths[i] != i + 1) {
                    return false;
                }
            }

            sort(lengths.begin(), lengths.end(), greater<int>());
            return (lengths[0] + lengths[1] == d);
        };

        bool result = isPossibleToConstructTree(n, d, edges);
        cout << (result ? "Yes" : "No") << endl;
    }

    return 0;
}
