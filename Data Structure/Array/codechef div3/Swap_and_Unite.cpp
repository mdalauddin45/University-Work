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
int min_op(string s) {
    unordered_map<char, vi> pos;
    int n=s.length();
    REP(i,0,n-1) {
        char ch = s[i];
        if (pos.find(ch) == pos.end()) pos[ch] = {i};
        else pos[ch].push_back(i);
    }
    int min_opp = INT_MAX;
    for (auto entry : pos) {
        vi indices = entry.second;
        int num = indices.size();
        int operations = 0;
        REP(j,1,num-1){
            operations += indices[j] - indices[j - 1] - 1;
        }
        min_opp = min(min_opp, operations);
    }
    return min_opp;
}

int main()
{
    Alauddin
    w(t){
        string s; cin >> s;
        int result = min_op(s);
        cout <<result <<endl;
    }
    return 0;
}