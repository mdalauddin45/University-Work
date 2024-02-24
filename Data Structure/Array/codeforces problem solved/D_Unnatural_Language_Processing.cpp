#include<bits/stdc++.h>
using namespace std;
bool isCon(char ch){
    return !(ch=='a' || ch =='e');
}
int main(){    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> v,c;
        string str="";
        
        for(int i=n-1;i>0;i--){
            if(isCon(s[i])&&isCon(s[i-1])){
                str.push_back(s[i]);
                str.push_back('.');
                str.push_back(s[i]);
                i--;
            }else if(!isCon(s[i]) && isCon(s[i-1])){
                str.push_back(s[i]);
                str.push_back(s[i-1]);
                str.push_back('.');
                i--;
            }else{
                str.push_back(s[i]);
            }
        }
        if(str.back()=='.')str.pop_back();
        reverse(str.begin(),str.end());
        cout<<str<<endl;
        
    }
    return 0;
}