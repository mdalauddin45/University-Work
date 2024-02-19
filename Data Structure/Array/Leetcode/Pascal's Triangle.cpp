#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result(numRows);
    
    for (int i = 0; i < numRows; i++) {
        result[i].resize(i + 1, 1);
        for (int j = 1; j < i; j++) {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }
    
    return result;
}

int main() {
    int numRows;
    cin >> numRows;
    
    vector<vector<int>> pascalsTriangle = generate(numRows);
    for (int i = 0; i < numRows; i++) {
        cout << string(numRows - i - 1, ' ');
        for (int j = 0; j < pascalsTriangle[i].size(); j++) {
            cout << pascalsTriangle[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
