#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;

#define cn(n) cin >> n;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define Alauddin                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define REP(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    Alauddin
    w(t)
    {
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n; ++i)
        {
            for (int j = 0; j < 2 * n; ++j)
            {
                if ((i / 2 + j / 2) % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
    }
    return 0;
}