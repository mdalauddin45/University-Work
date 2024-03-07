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
bool isTournamentInteresting(int N, int M) {
    int minMatches = N - 1;
    if (M >= minMatches) {
        return true;
    } else {
        return false;
    }
}
int main()
{
    Alauddin
    w(t){
        int n,m; cin>>n>>m;
        if (n >m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}