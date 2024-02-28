#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;

#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b)      for (int i = a; i <= b; i++)
void solve(){
    int n,a,b;
        cin>>n>>a>>b;
        if(a==b){
            if(n>a){
                if((n-(a+1))%(a+1)==0){
                    cout<<"Bob"<<endl;
                }
                else cout<<"Alice"<<endl;
            }
            else cout<<"Alice"<<endl;
        }
        else if(a<b){
            if(n<=a) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
        else cout<<"Alice"<<endl;
}
int main() {
    Alauddin
    w(t) {
        solve();
    }
    return 0;
}
