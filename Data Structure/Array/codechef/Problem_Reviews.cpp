#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> scores(N);
        bool good = true;

        for (int i = 0; i < N; ++i) {
            cin >> scores[i];
            if (scores[i] <= 4) {
                good = false;
            }
        }

        if (good) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
    
    return 0;
}