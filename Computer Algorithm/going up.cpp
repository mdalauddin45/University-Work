#include<bits/stdc++.h>
using namespace std;

int gu(int m,int n){
    if(n==m) return m*m;
    else return (m*m+gu(m+1,n));
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<gu(m,n);
}