#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    w(t){
        int x;cin >> x;
        if(x >= 67 && x <= 45000) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}