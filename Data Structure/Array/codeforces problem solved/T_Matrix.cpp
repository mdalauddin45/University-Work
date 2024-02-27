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
    int n;
    cin>>n;
    vector<vi> v(n, vi(n));
    REP(i,0,n-1){
        REP(j,0,n-1) cin>>v[i][j];
    }
    int s=0,p=0;
    // REP(i,0,n-1){
    //     REP(j,0,n-1) {
    //         if ((i + j) == (n - 1)) s+=v[i][j];
    //         if(i == j) p+=v[i][j];
    //     }
    // }
    REP(i,0,n-1){
        s+=v[i][i];
        p+=v[i][n-i-1];
    }
    cout<<abs(p-s)<<endl;
    return 0;
}