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
ll solve(vi v, int n){
    REP(i,0,n-1)cin>>v[i];
        sort(v.begin(), v.end());
        int r = 1;
        int median;

        if (n & 1)median = n / 2;
        else median = n / 2 - 1;
        for (int i = median; i < n - 1; ++i) {
            if (v[i] == v[i + 1]) r++;
            else break;
        }
        cout << r << endl;
}
int main()
{
    Alauddin
    w(x) {
        ll n; cin >> n;
        vi v(n);
        solve(v,n);
    }
    return 0;
}