#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    int a=53, b=28;
    
    int c = a & b; //AND
    int d = a | b; //OR
    int e = a ^ b; //XOR
    int f = ~b ; //NOT
    int g = a<<b ; //left shift
    int h = a>>b ; //Right shift
    // cout<<h<<endl;
    cout<<bitset<8>(c) <<endl;
    return 0;
}