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
    ll n; cin>>n;
    ll a = 0, b = 1, c;

    if (n == 1) {
        cout << a << endl;
        return 0;
    } else if (n == 2) {
        cout << b << endl;
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c << endl;
    return 0;
}