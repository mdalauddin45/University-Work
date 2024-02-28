#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(int u, int parent, int k, vector<vector<int>> &adj, vector<int> &leaves) {
    int cnt = 0;
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, k, adj, leaves);
            cnt += leaves[v];
        }
    }
    if (cnt == 0) {
        leaves[u] = 1;
    } else {
        leaves[u] = min(cnt, k);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> adj(n + 1);
        vector<int> leaves(n + 1, 0);

        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0, k, adj, leaves);

        cout << leaves[1] << endl;
    }

    return 0;
}
