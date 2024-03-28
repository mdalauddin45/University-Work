#include<bits/stdc++.h>
using namespace std;

bool can_adjust_radii(int n, vector<pair<int, pair<int, int>>> &disks) {
    sort(disks.begin(), disks.end(), [](const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
        return a.second.second < b.second.second;
    });

    for (int i = 0; i < n - 1; ++i) {
        if (disks[i].second.second * 2 <= disks[i + 1].second.second) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> disks;

    for (int i = 0; i < n; ++i) {
        int x, y, r;
        cin >> x >> y >> r;
        disks.push_back({i, {x, r}});
    }

    if (can_adjust_radii(n, disks)) cout << "NO"<<endl;
    else cout << "YES"<<endl;

    return 0;
}
