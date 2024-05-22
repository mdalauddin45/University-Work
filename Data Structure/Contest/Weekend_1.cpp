#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N=1e5+7;
int nums[N];
 
#define cn(n)           int n; cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    cn(n);
    if(n<1 || n>12) cout<<"1"<<endl;
    int w=0;
    switch(n){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            w = 8;
            break;
        case 4: case 6: case 9: case 11:
            w = 7;
            break;
        case 2:
            w = 6;
            break;
    }
    cout<<w<<endl;

    return 0;
}