#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
string lever_balance(const string& s) {
    size_t pivot_index = s.find('^');
    long long left_torque = 0;
    long long right_torque = 0;

    for (size_t i = 0; i < pivot_index; ++i) {
        if (s[i] != '=') {
            left_torque += (s[i] - '0') * (pivot_index - i);
        }
    }

    for (size_t i = pivot_index + 1; i < s.size(); ++i) {
        if (s[i] != '=') {
            right_torque += (s[i] - '0') * (i - pivot_index);
        }
    }

    if (left_torque > right_torque) {
        return "left";
    } else if (left_torque < right_torque) {
        return "right";
    } else {
        return "balance";
    }
}
int main()
{
    Alauddin
    string s; cin >> s;
    cout<<lever_balance(s)<<endl;
    return 0;
}