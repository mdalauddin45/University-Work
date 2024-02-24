#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    w(t) {
        int n;
        cin >> n;

        vi cells(n);
        REP(i, 0, n - 1) cin >> cells[i];

        int operations = 0;
        int currentFreeCell = -1;

        REP(i, 0, n - 1) {
            if (cells[i] == 1) {
                if (currentFreeCell != -1) {
                    operations += i - currentFreeCell - 1;
                }
                currentFreeCell = i;
            }
        }

        cout << operations << endl;
    }
    return 0;
}