#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int k=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>k)
        {
            
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
        for(int l=0;l<n;l++){
            cout<<arr[l]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    insertionSort(arr);
}