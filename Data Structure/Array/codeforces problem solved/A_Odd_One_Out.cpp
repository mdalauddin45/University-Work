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
        int a,b,c;
        cin >> a >> b >> c;
        if(a==b) cout<<c<<endl;
        else if(a==c)cout<<b<<endl;
        else cout<<a<<endl;
    }
    return 0;
}