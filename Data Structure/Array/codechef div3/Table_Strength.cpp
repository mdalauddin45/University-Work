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
int maxt(int n, vector<int>& v) {
    sort(v.begin(), v.end());
    int max_w = 0;
    REP(i,0,n-1) {
        int cw = v[i] * (n - i);
        max_w = max(max_w, cw);
    }

    return max_w;
}
int main()
{
    Alauddin
    w(t){
        int n; cin>>n;
        vi v(n);
        REP(i,0,n-1) cin>>v[i];
        int result = maxt(n, v);
        cout << result << "\n";
    }
    return 0;
}