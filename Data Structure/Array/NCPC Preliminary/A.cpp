#include <iostream>
#include <vector>

const int MOD = 998244353;

int countSkylines(int N, int K) {
    // dp[i][j] represents the number of ways to arrange i buildings in j groups
    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(K + 1, 0));

    // Initialize base case
    dp[1][1] = 1;

    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j <= K; ++j) {
            // Add i-th building to an existing group
            dp[i][j] = dp[i - 1][j];

            // Start a new group with the i-th building
            for (int k = 1; k < i; ++k) {
                dp[i][j] = (dp[i][j] + dp[k][j - 1]) % MOD;
            }
        }
    }

    // Sum up the results for all groups
    int result = 0;
    for (int j = 1; j <= K; ++j) {
        result = (result + dp[N][j]) % MOD;
    }

    return result;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        int result = countSkylines(N, K);
        std::cout << result << std::endl;
    }

    return 0;
}
