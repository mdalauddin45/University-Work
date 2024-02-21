#include<bits/stdc++.h>
using namespace std;

// Function to check if it is possible to achieve a maximum distance with given toys
bool isPossible(double maxDistance, const vector<int>& positions, int numToys) {
    double currentPos = positions[0];
    int toysUsed = 1;

    for (int i = 1; i < positions.size(); ++i) {
        if (positions[i] - currentPos > maxDistance) {
            currentPos = positions[i];
            ++toysUsed;
        }
    }

    return toysUsed <= numToys;
}

// Function to find the minimum possible maximum distance and the minimum number of toys needed
pair<double, int> findOptimalAssignment(const vector<int>& positions, int numToys) {
    double left = 0.0, right = 1e9, mid;
    double ansMaxDistance = 0.0;
    int ansNumToys = numToys;

    while (right - left > 1e-7) {
        mid = (left + right) / 2.0;

        if (isPossible(mid, positions, numToys)) {
            ansMaxDistance = mid;
            ansNumToys = numToys;
            right = mid;
        } else {
            left = mid;
        }
    }

    return make_pair(ansMaxDistance, ansNumToys);
}

int main() {
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

        pair<double, int> result = findOptimalAssignment(positions, N - 1);

        cout << fixed << result.first << " " << result.second << endl;
    }

    return 0;
}
