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
    cin >> n;
    vi v1(n),v2(n);
    REP(i,0,n-1)cin>>v1[i]; 
    REP(i,0,n-1)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    bool ans = true; 
    REP(i,0,n-1){
        if(v1[i]!=v2[i]) {
            ans=false;
            break;
        }
    } 
    if(ans==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
    return 0;
}
