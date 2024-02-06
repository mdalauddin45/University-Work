#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    cin>>pos;

    if(pos<=0 || pos>n+1)cout<<"not possible"<<endl;
    else{
        for(int i=pos-1; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        for(int i=0; i<n-1; i++)cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity 0(1)