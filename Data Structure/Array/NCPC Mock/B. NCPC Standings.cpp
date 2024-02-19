#include<bits/stdc++.h>
using namespace std;
string solve(int p, int s, int r) {
    int result = p;
    if (s < result || (s == result && r <= 1)) {
        return "Yes";
    } else {
        return "No";
    }
}
int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int p,s,r;
        cin>>p>>s>>r;
        string result = solve(p,s,r);
        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}