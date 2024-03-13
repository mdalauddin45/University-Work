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
        int n; cin>>n;
        int ones=0,twos=0,more=0;
        REP(i,0,n-1){
            int c;
            cin>>c;
            if(c==1)ones++;
            else{
                if(c>2){
                    more+=c-2;
                    twos++;
                }else twos++;
            }
        }
        int a=0,b=0;
        a+=(ones+1)/2;
        b+=ones/2;
        bool flag = false;
        flag = ones%2;
        if(flag && more%2==1)flag=false;
        else if(more%2==1) flag=true;
        if(flag) a+=twos;
        else b+=twos;
        if(a>b) cout<<"Alice"<<endl;
        else if(b>a) cout<<"Bob"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}