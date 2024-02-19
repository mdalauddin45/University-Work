#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<string>& grid) {
    int operations = 0;

    // Iterate through each cell in the grid
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            // Check only black cells
            if (grid[i][j] == 'B') {
                // Count the number of black diagonal neighbors
                int diagonalNeighbors = 0;
                if (i > 0 && j > 0 && grid[i - 1][j - 1] == 'B') diagonalNeighbors++;
                if (i > 0 && j < 6 && grid[i - 1][j + 1] == 'B') diagonalNeighbors++;
                if (i < 6 && j > 0 && grid[i + 1][j - 1] == 'B') diagonalNeighbors++;
                if (i < 6 && j < 6 && grid[i + 1][j + 1] == 'B') diagonalNeighbors++;

                // If there are 4 diagonal neighbors, increment operations
                if (diagonalNeighbors == 4) operations++;
            }
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(7);
        for (int i = 0; i < 7; ++i) {
            cin >> grid[i];
        }

        int result = minOperations(grid);
        cout << result << endl;
    }

    return 0;
}
