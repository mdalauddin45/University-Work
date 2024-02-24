#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> c(n + 1); // 1-based indexing
        vector<int> prefix_sum(n + 1, 0);

        for (int i = 1; i <=n; i++) {
            cin >> c[i];
            prefix_sum[i] = prefix_sum[i - 1] + c[i];
        }

        unordered_set<int> used_values;
        bool good = true;

        for (int i = 0; i < q; i++) {
            int li, ri;
            cin >> li >> ri;

            int sum = prefix_sum[ri-1] - prefix_sum[li - 1];

            if (used_values.find(sum) == used_values.end()) {
                used_values.insert(sum);
            } else {
                good = true;
            }
        cout << (good ? "YES" : "NO") << endl;
        }

    }

    return 0;
}
