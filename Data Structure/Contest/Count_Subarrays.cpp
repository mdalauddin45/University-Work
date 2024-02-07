#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        vector<long long> prefix_sum(N + 1, 0);
        vector<long long> count(N + 1, 0);

        long long current_sum = 0;
        count[0] = 1;

        for (int i = 0; i < N; i++) {
            current_sum += P[i];
            prefix_sum[i + 1] = current_sum;
            count[current_sum]++;
        }

        for (int i = 1; i <= N; i++) {
            cout << count[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
