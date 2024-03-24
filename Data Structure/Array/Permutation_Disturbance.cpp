#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
int solve(int n, vi p) {
    int operations = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (p[j] > p[j + 1]) {
                swap(p[j], p[j + 1]);
                operations++;
            }
        }
    }
    return operations;
}
int main()
{
    Alauddin
    w(t){
        int n; cin>>n;
        vi v(n);
        REP(i,0,n-1) cin>>v[i];
        cout << solve(n, v) << endl;
    }
    return 0;
}