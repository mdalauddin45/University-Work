#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int sum = 1;
        bool ans = true;
        int day = 7;
        for (int i = 1; i <= day; i++) {

            x -= sum;
            sum *= 2;

            if (x < 0) {
                ans = false;
                break;
            }
        }
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}