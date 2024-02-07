#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
const int MAX_N = 1000006;

int bitwiseOR(int a, int b) {
    return a | b;
}

int countGoodArrays(int N, int K) {
    vector<vector<int>> dp(N + 1, vector<int>(K + 1));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= K; ++j) {
            for (int k = 0; k <= j; ++k) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
            }
        }
    }
    
    int result = 0;
    for (int j = 0; j <= K; ++j) {
        result = (result + dp[N][j]) % MOD;
    }
    
    return result;
}

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        cout << countGoodArrays(N, K) << endl;
    }
    return 0;
}