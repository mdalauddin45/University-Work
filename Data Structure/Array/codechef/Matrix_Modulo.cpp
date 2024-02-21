#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countWays(int N, vector<vector<int>>& A, int i, int j, int k, vector<vector<vector<int>>>& dp) {
    if (A[i][j] != 0 && A[i][j] != k) {
        return 0;
    }

    if (i == N - 1 && j == 0 && A[i][j] == 0) {
        return 1;
    }

    if (dp[i][j][k] != -1) {
        return dp[i][j][k];
    }

    int ways = 0;
    for (int x = 0; x < 2 * N * N; ++x) {
        ways = (ways + countWays(N, A, i + 1, x, A[i][j], dp)) % MOD;
    }

    return dp[i][j][k] = ways;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<vector<int>> A(N, vector<int>(N, 0));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }

        vector<vector<vector<int>>> dp(N, vector<vector<int>>(2 * N * N, vector<int>(N * N + 1, -1)));

        int result = 0;
        for (int j = 0; j < 2 * N * N; ++j) {
            result = (result + countWays(N, A, 0, j, 0, dp)) % MOD;
        }

        cout << result << endl;
    }

    return 0;
}
