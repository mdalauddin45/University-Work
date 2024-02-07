#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int k = 0;
        int maxk = 0;

        for (int i = 0; i <= y; i++) {
            if (pow(2, i) - 1 <= x) {
                k = i;
                maxk = max(maxk, k);
            } else {
                break;
            }
        }

        cout << maxk << endl;
    }

    return 0;
}
