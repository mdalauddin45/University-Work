#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;

    double p1 = A / 100.0;
    double p2 = B / 100.0;
    double p3 = C / 100.0;

    vector<long long> dp(N + 1, 0);

    for (int i = N; i >= 0; --i) {
        for (int j = N; j >= 0; --j) {
            if (i + j == N) continue;

            double denom = 1 - p3 * (i + j) / N;

            dp[j] = (p1 * (1 + dp[j]) + p2 * (1 + dp[j + 1]) + p3 * dp[j]) / denom;

            dp[j] %= MOD;
        }
    }

    cout << dp[0] << endl;

    return 0;
}
