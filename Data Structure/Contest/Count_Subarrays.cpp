#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> P(n);

        for (int i = 0; i < n; i++) {
            cin >> P[i];
        }

        vector<int> prefixSum(n + 1, 0);
        unordered_map<int, int> frequency;

        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + P[i];
            frequency[prefixSum[i + 1]]++;
        }

        for (int i = 1; i <= n; i++) {
            cout << frequency[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
