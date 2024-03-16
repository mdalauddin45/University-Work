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
        int a, b;
        cin>>a>>b;
        int res, n = a - 1;
        if(n % 4 == 0) res = n;
        else if(n % 4 == 1) res = 1;
        else if(n % 4 == 2)res = n + 1;
        else res = 0;
        if(res == b) cout<<a<<endl;
        else{
            if((res ^ b) != a) cout<<(a + 1)<<endl;
            else cout<<(a + 2)<<endl;
        }
    }
    return 0;
}