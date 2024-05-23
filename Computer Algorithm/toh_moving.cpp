#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << a << " to rod " << b << endl;
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    cout << "Move disk " << n << " from rod " << a << " to rod " << b << endl;
    towerOfHanoi(n - 1, c, b, a);
}

int main() {
    int n; cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}