#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }
        
        unordered_set<int> set(a.begin(), a.end());
        vector<int> l, r;
        int count = 0;

        for (int j = 1; j <= n && count < 2 * k; j++) {
            if (set.count(j) && set.count(n + j)) {
                l.push_back(j);
                r.push_back(n + j);
                count += 2;
            } else if (set.count(j) && count < k) {
                l.push_back(j);
                count++;
            }
        }

        for (int x : l) {
            cout << x << " ";
        }
        cout << endl;

        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
