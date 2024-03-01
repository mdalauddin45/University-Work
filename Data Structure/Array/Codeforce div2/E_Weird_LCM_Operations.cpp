#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<pair<int, pair<int, int>>> operations;

    auto add_operation = [&](int i, int j, int k) {
        operations.push_back({i, {j, k}});
    };

    int k = 0;  // Number of operations
    for (int i = n; i >= 2; i--) {
        int j = min(i - 1, int(sqrt(i)) + 1);
        for (; j >= 2; j--) {
            int gcd_ij = __gcd(i, j);
            if (gcd_ij == 1) {
                add_operation(i, j, j - 1);
                k++;
                add_operation(i, j - 1, j - 2);
                k++;
                add_operation(i, j, j - 2);
                k++;
                break;
            }
        }
    }

    // Output the result
    cout << k << '\n';
    for (const auto &op : operations) {
        cout << op.first << ' ' << op.second.first << ' ' << op.second.second << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
