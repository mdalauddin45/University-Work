#include<bits/stdc++.h>
using namespace std;

int sh(int m,int n){
    int d=(n+m)/2;
    if(n==m) return m*m;
    else return (sh(m,d)+sh(d+1,n));
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<sh(m,n);
}