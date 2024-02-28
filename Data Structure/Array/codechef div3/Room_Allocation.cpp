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
        int n; cin >> n;
        ll ans=0;
	    REP(i,0,n-1){
	        int x;
	        cin>>x;
	        ans+=(x/2)+(x%2);
	    }
	    cout<<ans<<endl;
    }
    return 0;
}