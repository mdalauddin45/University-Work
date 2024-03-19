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
        vi v(n), vv(n + 1, 0);
        REP(i,0,n-1)cin >>v[i];
        REP(i,0,n-1)vv[v[i]]++;
        int r = 0;
        int bol = 1;
        REP(i,0,n){
            if (vv[i] == 1){
                if (bol)bol = 0;
                else{
                    r = i;
                    break;
                }
            }else if (vv[i] == 0){
                r = i;
                break;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}