#include<bits/stdc++.h>
using namespace std;

int gd(int m,int n){
    if(n==m) return m*m;
    else return (m*m+gd(m,n-1));
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<gd(m,n);
}