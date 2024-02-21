#include <iostream>
#include <vector>
using namespace std;

int lcs_length(const vector<int>& A, const vector<int>& B) {
    int m = A.size();
    int n = B.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1] ;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1] );
            }
        }
    }

    return dp[m][n];
}

int min_deleted_subarray_length(const vector<int>& A, const vector<int>& B) {
    int lcs_len = lcs_length(A, B);
    int b_len = B.size();

    return b_len - lcs_len;
}

int main() {
    int t;
    cin >> t;

    for (int caseNum = 1; caseNum <= t; ++caseNum) {
        int n;
        cin >> n;

        vector<int> A(n), B(n);

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> B[i];
        }

        int result = min_deleted_subarray_length(A, B);

        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0; 
}
