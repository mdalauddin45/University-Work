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
char cg(int x, int y) {
    if (x < 50)
        return 'Z';
    else if (y < 50)
        return 'F';
    else
        return 'A';
}
int main()
{
    Alauddin
    w(t){
        int x,y; cin>>x>>y;
        char grade = cg(x, y);
        cout << grade << endl;
    }
    return 0;
}