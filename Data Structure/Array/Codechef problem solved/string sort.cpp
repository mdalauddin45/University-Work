#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;
    vector<int> count(128, 0);
    for (char c : s1)
        count[c]++;
    for (char c : s2) {
        count[c]--;
        if (count[c] < 0)
            return false;
    }
    return true;
}
int main()
{
    Alauddin
    string s1,s2;
    cin >> s1 >> s2;
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // if(s1==s2) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    if (areAnagrams(s1, s2)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}