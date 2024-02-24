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
        int n=3;
        char arr[n][n];
        int a=0, b=0, c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='A') a++;
                else if(arr[i][j]=='B') b++;
                else c++;
            }
        }
        if(a==2) cout<<"A"<<endl;
        else if(b==2) cout<<"B"<<endl;
        else cout<<"C"<<endl;
    }
    return 0;
}