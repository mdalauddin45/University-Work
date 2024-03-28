#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> appetizers(n);
        vector<int> main_dishes(n);

        for (int i = 0; i < n; ++i) {
            cin >> appetizers[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> main_dishes[i];
        }

        sort(appetizers.begin(), appetizers.end());
        sort(main_dishes.begin(), main_dishes.end());

        int min_charm = INT_MAX;

        for (int i = 0; i < n; ++i) {
            min_charm = min(min_charm, abs(appetizers[i] - main_dishes[i]));
        }

        cout << min_charm << endl;
    }

    return 0;
}
