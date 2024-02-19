#include<bits/stdc++.h>
using namespace std;
bool checkSquare(const vector<string>& grid, int n) {
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            if (grid[i][j] == '1') {
                if (grid[i-1][j] != '1' || grid[i+1][j] != '1' ||
                    grid[i][j-1] != '1' || grid[i][j+1] != '1') {
                    return false;
                }
            }
        }
    }
    return true;
}

bool checkTriangle(const vector<string>& grid, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '1') {
                if (grid[i+1][j] != '1' || grid[i+1][j-1] != '1' || grid[i+1][j+1] != '1') {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        if (checkSquare(grid, n)) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }

    }
    
    return 0;
}