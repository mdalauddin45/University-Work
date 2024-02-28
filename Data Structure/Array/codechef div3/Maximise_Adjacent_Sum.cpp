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
        int n;cin >> n;
        vi v(n);
	    ll s=0;
	    REP(i,0,n-1){
	        cin>>v[i];
	        s+=v[i];
	    }
	    sort(v.begin(),v.end());
	    int a=v[0];
	    int b=v[1];
	    s=2*s-(a+b);
	    cout<<s<<endl;
    }
    return 0;
}