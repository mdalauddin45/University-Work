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
        lli a,b,c; cin>>a>>b>>c;
        lli r=b%3;
        if (r+c>=3 || r==0)cout <<fixed<< setprecision(0)<<a + ceil((b + c) / 3.0) << endl;
        else cout<<-1<<endl;
    }
    return 0;
}