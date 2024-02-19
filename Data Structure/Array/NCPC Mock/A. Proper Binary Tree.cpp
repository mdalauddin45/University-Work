#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        cout << "Case " << i << ":" << endl;
        cout << "o--|__" << endl;
        for (int j = 1; j <= n; j++) {
            cout << "o--|";
            for (int k = 0; k < j; k++) {
                cout << " ";
            }
            // cout << "__" << endl;
            if (j < n) {
                cout << " ";
            }
        }
    }
    return 0;
}