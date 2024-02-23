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
        int a,b;
        cin>>a>>b;
        if(a==b)cout<<"NEUTRAL"<<endl;
        else if(a>b)cout<<"LOSS"<<endl;
        else cout<<"PROFIT"<<endl;
    }
    return 0;
}