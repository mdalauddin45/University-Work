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
    int n; cin>>n;
    vi v(n);
    vi ans(n);
    REP(i,0,n-1) cin>>v[i];
    REP(i,0,n-1){
        int d = *min_element(v.begin(), v.end()); 
        v.erase(find(v.begin(), v.end(), d));  
        ans[i] = d;
    }
    REP(i,0,n-1){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

//0(n*n)