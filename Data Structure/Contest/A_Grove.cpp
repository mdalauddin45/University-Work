#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

struct Point {
    int x, y;
};

bool isValid(const Point& p, int n, double r, const vector<Point>& trees) {
    for (const auto& tree : trees) {
        int dx = p.x - tree.x;
        int dy = p.y - tree.y;
        if (dx*dx + dy*dy < 4*r*r)
            return false;
    }
    return true;
}

void findMaxTrees(int n, double r) {
    const int side = 2 * r;
    const int margin = r;
    const int step = side - 1;

    vector<Point> trees;

    for (int x = margin; x <= n - margin; x += step) {
        for (int y = margin; y <= n - margin; y += step) {
            Point p = {x, y};
            if (isValid(p, n, r, trees)) {
                trees.push_back(p);
            }
        }
    }

    cout << trees.size() << endl;
    for (const auto& p : trees) {
        cout << p.x << " " << p.y << endl;
    }
}

int main() {
    int n;
    double r;
    cin >> n >> r;

    findMaxTrees(n, r);

    return 0;
}
