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
    int n;
    cin>>n;
    int arr[n];
    REP(i,0,n-1)cin>>arr[i];
    sort(arr,arr+n);
    REP(i,0,n-1)cout<<arr[i]<<" ";
    return 0;
}