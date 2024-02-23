#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        // Calculate the smallest sum
        ll smallest_sum = n * (n + 1) / 2;  // Sum of the first n natural numbers

        cout << smallest_sum << endl;
    }

    return 0;
}
