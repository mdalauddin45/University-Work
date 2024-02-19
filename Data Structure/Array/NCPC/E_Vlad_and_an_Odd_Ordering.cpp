#include <iostream>

using namespace std;

long long findKthCard(int n, int k) {
    long long result = 0;

    for (int i = 1; i <= n; i += 2) {
        if (k <= n / i) {
            result = i * k;
            break;
        }
        k -= n / i;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        long long answer = findKthCard(n, k);
        cout << answer << endl;
    }

    return 0;
}
