#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
void solve() {
    int n;
    cin >> n;
    int p = n / 2;
    int ans = p * (p + 1);
    if (n % 2 == 1) {
        ans += (n / 2) + 1;
    }
    cout << ans << endl;
}
int main()
{
    Alauddin
    w(t){
        solve();
    }
    return 0;
}