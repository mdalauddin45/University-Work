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
        int n; cn(n);
        vi a(n);
        REP(i, 0, n-1) cn(a[i]);
        sort(a.begin(),a.end());
        lli i=0,j=n-1,k=1,l=n-2;
        cout<<abs(a[i]-a[j])+abs(a[j]-a[k])+abs(a[k]-a[l])+abs(a[l]-a[i])<<endl; 
    }
    return 0;
}
