#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to solve the stone problem
vector<int> stone_problem(int N, int K, vector<int>& A) {
    for (int turn = 0; turn < K; ++turn) {
        // Find the maximum value in the array
        int MAX = *max_element(A.begin(), A.end());

        // Subtract each element from MAX and update the array A
        for (int i = 0; i < N; ++i) {
            A[i] = MAX - A[i];
        }
    }

    return A;
}

int main() {
    // Input: Number of elements (N) and the number of turns (K)
    int N, K;
    cin >> N >> K;

    // Input: Array of N integers
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Call the stone_problem function
    vector<int> result = stone_problem(N, K, A);

    // Output the result
    for (int i = 0; i < N; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
