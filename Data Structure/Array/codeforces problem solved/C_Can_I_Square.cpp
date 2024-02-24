#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    w(t){
        int n;
        cin>>n;
        vi v(n);
        int s=0;
        REP(i,0,n-1){
             cin>>v[i];
             s+=v[i];
        }
        int sqrt_s = sqrt(s);
        if (sqrt_s * sqrt_s == s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}