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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt =0;
        REP(i,0,n-1){
            if(s[i]=='1') cnt++;
        }
        if(cnt>k){
            REP(i,0,n-1){
                if(s[i]=='1' && k>0){
                    s[i]='0';
                    k--;
                }
            }
            cout<<s<<endl;
        }else{
            for(int i=0;i<(n-k);i++){
                cout<<'0';
            }
            cout<<endl;
        }
    }
    return 0;
}