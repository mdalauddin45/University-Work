#include <bits/stdc++.h>
using namespace std;

// Function to print the triangle
// void print(const vector<vector<int>>& triangle) {
//     for (int i = 0; i < triangle.size(); i++) {
//         for (int j = 0; j < triangle[i].size(); j++) { 
//             cout << triangle[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
        return triangle[0][0];
}
int main() {
    int n;
    cin >> n;

    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }

    cout<<minimumTotal(triangle)<<endl;
    return 0;
}
