#include<bits/stdc++.h>
using namespace std;

int ss(int n) {
    if (n == 0) return 1; 
    else return ss(n - 1) + (2 * n + 1) * (2 * n + 1);
}

int main() {
    int n;
    cin >> n;
    int sum = ss(n);
    cout << sum << endl;
    return 0;
}
