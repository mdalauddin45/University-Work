#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj; // Adjacency list
vector<int> subtree_size; // Size of subtree rooted at each house

void dfs(int u, int parent) {
    subtree_size[u] = 1;

    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u);
            subtree_size[u] += subtree_size[v];
        }
    }
}

int main() {
    int n;
    cin >> n;

    adj.resize(n + 1);
    subtree_size.resize(n + 1);

    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0); // Start DFS from house 1

    for (int u = 1; u <= n; ++u) {
        int max_subtree_size = 0;
        for (int v : adj[u]) {
            if (subtree_size[v] > max_subtree_size) {
                max_subtree_size = subtree_size[v];
            }
        }
        int remaining_ants = n - subtree_size[u];
        if (max_subtree_size <= n / 2 && remaining_ants <= n / 2) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}
