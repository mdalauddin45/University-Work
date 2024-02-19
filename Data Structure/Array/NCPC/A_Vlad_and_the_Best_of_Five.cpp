#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int a=0;
        int b=0;
        for(char c: s){
            if(c == 'A') a++;
            else b++;
        }
        if(a>b)cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    
    return 0;
}