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
    int a,b; cin>>a>>b;
    string s; cin>>s;
    if(s.length()!=a+b+1 || s[a]!='-'){
         cout<<"No"<<endl;
         return 0;
    }
    for(int i=0;i<s.length();i++){
        if(i!=a && !isdigit(s[i])){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}