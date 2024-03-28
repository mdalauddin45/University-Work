#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool is_possible(int n, const vector<pair<int, int>>& forbidden) {
    set<pair<int, int>> forbidden_cells;
    int max_x = 0, max_y = 0;

    for (int i = 0; i < n; ++i) {
        int x = forbidden[i].first, y = forbidden[i].second;
        forbidden_cells.insert({x, y});
        max_x = max(max_x, x);
        max_y = max(max_y, y);
    }

    set<pair<int, int>> reachable;
    reachable.insert({0, 0});

    for (int x = 0; x <= max_x; ++x) {
        for (int y = 0; y <= max_y; ++y) {
            if (forbidden_cells.count({x, y}) == 0) {
                if (reachable.count({x - 1, y}) || reachable.count({x, y - 1})) {
                    reachable.insert({x, y});
                }
            }
        }
    }

    return reachable.count({0, 0}) > 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> forbidden;
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            forbidden.push_back({x, y});
        }

        if (is_possible(n, forbidden)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
