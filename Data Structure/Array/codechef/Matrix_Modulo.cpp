#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int countWays(int n, vector<vector<int>> arr) {
    vector<vector<int>> dp(n + 1, vector<int>(n * n + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= n * n; ++j) {
            for (int k = 0; k <= n * n-i; ++k) {
                if (arr[i - 1][j-1] == 0 || arr[i - 1][j] == k) {
                    if (j >= k) {
                        dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
                    }
                }
            }
        }
    }
    int result = 0;
    for (int j = 0; j <= n * n; ++j) {
        result = (result + dp[n][j]) % MOD;
    }

    return result;
}



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
            }
        }

        int ways = countWays(n, arr);
        cout << ways << endl;
    }

    return 0;
}
