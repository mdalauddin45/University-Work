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


int main()
{
    Alauddin
    w(t){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxc = 0;
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ans++;
                cnt = 0;
            } else {
                cnt++;
                maxc = max(maxc, cnt);
            }
        }
        ans += maxc;
        cout << ans << endl;

    }
    return 0;
}