#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<int> positions(N);
        for (int i = 0; i < N; ++i) {
            cin >> positions[i];
        }
        sort(positions.begin(), positions.end());
        double minMaxDistance;
        if (N % 2 == 0) {
            minMaxDistance = max(positions[N / 2] - positions[N / 2 - 1], positions[N - 1] - positions[0]);
        } else {
            minMaxDistance = positions[N - 1] - positions[0];
        }
        int minToys = 1;
        for (int i = 1; i < N; ++i) {
            if (positions[i] - positions[i - 1] > minMaxDistance * 2) {
                minToys++;
            }
        }
        cout << fixed << minMaxDistance << " " << minToys << endl;
    }
    return 0;
}