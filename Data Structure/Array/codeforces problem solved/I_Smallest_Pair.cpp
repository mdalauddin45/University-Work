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
    w(t){
        int n;
        cin>>n;
        int arr[n];
        int min_sum=INT_MAX;
        REP(i,1,n)cin>>arr[i];
        for(int i = 1; i < n; i++){
            for(int j =i+1; j <=n; j++){
                int cs=arr[i]+arr[j]+j-i;
                min_sum=min(min_sum,cs);
            }
        }
        cout<<min_sum<<endl;

    }
    return 0;
}