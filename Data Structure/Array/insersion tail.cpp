#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    int pos=n+1;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    cin>>num;
    if(pos<=0 || pos>n+1)cout<<"not possible"<<endl;
    else{
        for(int i=n-1; i>=pos-1; i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        for(int i=0; i<n+1; i++)cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity 0(1)