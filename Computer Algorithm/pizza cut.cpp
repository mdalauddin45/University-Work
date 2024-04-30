#include<bits/stdc++.h>
using namespace std;

int p(int n){
    if(n==2) return 2;
    else return p(n-1)+n;
}
int main(){
    int n;
    cin>>n;
    cout<<p(n);
}