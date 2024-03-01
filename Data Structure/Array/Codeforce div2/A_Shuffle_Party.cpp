#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    w(t){
        int s; cin >> s;
        int ans = 0;
        while ((1 << ans) <= s) ans++;
        ans--;
        cout << (1 << ans) << endl;
    }
    return 0;
}