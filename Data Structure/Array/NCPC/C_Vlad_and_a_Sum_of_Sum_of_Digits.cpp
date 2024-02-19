#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int vladSum(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        totalSum += sumOfDigits(i);
    }
    return totalSum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << vladSum(n) << endl;
    }

    return 0;
}
