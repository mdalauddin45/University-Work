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
        string s;
        cin >> s;
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        string p;
        if (h < 12) {
            p = "AM";
            if (h == 0) h = 12;
        } else {
            p = "PM";
            if (h > 12) h -= 12; 
        }
        cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << " " << p << endl;
    }
    return 0;
}