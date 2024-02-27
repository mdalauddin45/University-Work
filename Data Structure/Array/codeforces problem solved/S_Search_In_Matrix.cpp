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
    int n,m;
    cin>>n>>m;
    vector<vi> v(n, vi(m));
    REP(i,0,n-1){
        REP(j,0,m-1) cin>>v[i][j];
    }
    int s; cin>>s;
    bool ans = false;
    REP(i,0,n-1){
        REP(j,0,m-1) {
            if(s==v[i][j]){
                ans = true;
                break;
            }
        }
    }
    if(!ans) cout<<"will take number"<<endl;
    else cout<<"will not take number"<<endl;
    return 0;
}