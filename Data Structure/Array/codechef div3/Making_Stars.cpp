#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> graph(n, vector<int>(n));
        REP(i, 0, n - 1) {
            REP(j, 0, n - 1) {
                cin >> graph[i][j];
            }
        }

        int minOperations = INT_MAX;

        // Iterate through all possible spanning trees
        for (int mask = 0; mask < (1 << n); mask++) {
            int operations = 0;
            vector<int> centralNodes;

            // Check each node as a potential central node
            REP(i, 0, n - 1) {
                if ((mask >> i) & 1) {
                    centralNodes.push_back(i);
                }
            }

            // Calculate the minimum number of operations for each central node
            for (int centralNode : centralNodes) {
                REP(i, 0, n - 1) {
                    if (i != centralNode && ((mask >> i) & 1) == 0) {
                        operations += (graph[centralNode][i] == 1);
                    }
                }
            }

            // Update the minimum operations
            minOperations = min(minOperations, operations);
        }

        cout << minOperations << endl;
    }

    return 0;
}
