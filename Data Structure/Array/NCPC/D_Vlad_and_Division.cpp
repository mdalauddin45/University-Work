#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countBits(int x) {
    int count = 0;
    while (x > 0) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int minGroups(vector<int>& numbers) {
    int maxBits = 0;

    // Count the number of different bits at each position
    for (int i = 0; i < 31; ++i) {
        int countOnes = 0, countZeros = 0;

        for (int num : numbers) {
            if ((num >> i) & 1) {
                countOnes++;
            } else {
                countZeros++;
            }
        }

        maxBits = max(maxBits, min(countOnes, countZeros));
    }

    return maxBits;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        int result = minGroups(numbers);
        cout << result << endl;
    }

    return 0;
}
