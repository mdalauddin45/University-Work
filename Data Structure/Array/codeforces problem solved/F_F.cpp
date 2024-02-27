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
    w(t){
         int x, N;
        cin >> x >> N;

        long long total_sum = (long long)N * (N + 1) / 2 - x;

        if (total_sum % 2 != 0 || x == 1 ) {
            cout << "impossible" << endl;
            continue;
        }
        vector<char> partition(N, '0');

        long long curr_sum = 0;
        for (int i = N; i > 0; --i) {
            if (i == x) continue;
            if (curr_sum + i <= total_sum / 2) {
                curr_sum += i;
                partition[i - 1] = '1';
            }
        }
        partition[x - 1] = '2';
        for (int i = 0; i < N; ++i) {
            cout << partition[i];
        }
        cout << endl;
    }
    return 0;
}