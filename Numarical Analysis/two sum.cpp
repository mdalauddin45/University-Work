#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int t;
    cin>>t;
    for(int i=0; i<n; i++)cin>>v[i];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==t){
                cout<<i<<" "<<j<<endl;
            }else{
                cout<<" "<<endl;
            }
        }
    }
    
    return 0;
}