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
    long long n, k, a;
    cin >> n >> k >> a;

    double r =( n * k) / a;
    long long q =r;
    double t=r-q;

    if (t>0) cout << "double" << endl;
    else if (q<=2147483647) cout << "int" << endl;
    else cout << "long long" << endl;
    return 0;
}