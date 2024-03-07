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
        lli n; cin >> n;
        string s; cin >> s;
        n=s.length();
        int r=0;
        REP(i,0,n/2){
            if(s[i]==s[n-i-1]) continue;
            if(s[i]>s[n-i-1]) r=1;
            else break;
        }
        string cur=s;
        reverse(cur.begin(), cur.end());
        cout << (r == 1 ? cur + s : s) << endl;
    }
    return 0;
}