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
        int n,a,b; cin>>n>>a>>b;
        int result=0;
        if (n % 2 == 0)  result = min(n * a, n / 2 * b);
        else result = min(n * a, (n / 2) * b + a);
        cout << result << endl;
    }
    return 0;
}