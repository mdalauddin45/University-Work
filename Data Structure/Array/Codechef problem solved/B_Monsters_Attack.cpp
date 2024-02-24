#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n),x(n);
    int l=-1,r=-1;
    REP(i,0,n-1) cin>>a[i];
    REP(i,0,n-1) cin>>x[i];
    for(int i=0; i<n; i++){
        if(x[i]>0){
            r=i;
            l=i-1;
            break;
        }
    }
    bool pos =true;
    int t=0, rem=0;
    while (l>=0 && r<=n-1)
    {
        if(abs(x[l]-t)<abs(x[r]+t)){
            if(((-x[l]-t)*+rem)>=a[l]){
                if(a[l]<=())
            }
        }
    }
    
}
int main()
{
    Alauddin
    
    return 0;
}