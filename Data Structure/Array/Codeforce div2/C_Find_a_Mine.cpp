#include <iostream>
using namespace std;

int query(int x, int y) {
    cout << "? " << x << " " << y << endl;
    int d;
    cin >> d;
    return d;
}

void solve() {
    int n, m;
    cin >> n >> m;

    // Query the corners
    int d1 = query(1, 1);
    int d2 = query(1, m);
    int d3 = query(n, 1);

    // Determine the possible positions of the mine
    int x, y;
    if (d1 == 0 || d2 == 0) {
        x = (d1 == 0) ? 1 : n;
        y = (d1 == 0) ? 1 : m;
    } else {
        x = (d1 < d2) ? 1 : n;
        y = (d1 < d2) ? m : 1;
    }

    // Query the last cell to determine the position of the mine
    int d = query(x, y);
    if (d == 0) {
        cout << "! " << x << " " << y << endl<<endl;
    } else {
        cout << "! " << (x == 1 ? n : 1) << " " << (y == 1 ? m : 1) << endl<<endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
