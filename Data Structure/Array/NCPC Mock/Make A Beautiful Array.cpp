#include<bits/stdc++.h>
using namespace std;

pair<int, int> maxConsecutiveSubarraySum(const vector<int>arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    int moves = 0;

    for (int num : arr) {
        currentSum += num;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
            moves++;
        }
    }

    return {maxSum, moves};
}

int main() {
    int t;
    cin>>t;
    for (int a = 1; a <= t; a++) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int k = 0; k < n; k++) {
            cin >> arr[k];
        }
        pair<int, int> initialMCSS = maxConsecutiveSubarraySum(arr);

        int maxMCSS = initialMCSS.first;
        int minMoves = initialMCSS.second;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                reverse(arr.begin() + i, arr.begin() + j + 1);
                pair<int, int> currentMCSS = maxConsecutiveSubarraySum(arr);
                if (currentMCSS.first > maxMCSS || (currentMCSS.first == maxMCSS && currentMCSS.second < minMoves)) {
                    maxMCSS = currentMCSS.first;
                    minMoves = currentMCSS.second;
                }
                reverse(arr.begin() + i, arr.begin() + j + 1);
            }
        }
        cout << "Case " << a << ": " << maxMCSS << " " << minMoves << endl;
    }

    return 0;
}
