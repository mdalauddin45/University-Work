#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;

#define w(t)            lli t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main()
{
    Alauddin
    w(t){
        lli n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;        
        string sd="1";
        for(int i=0;i<n;i++)sd+="1";
            lli cnt=0;
            for(int i = 0; i < n; i++){
                
                string s = "";
                s+=s1.substr(0,i+1);
                for(int j = i; j < n; j++){
                    s += s2[j];
                }
                if(s<sd){
                    sd=s;
                    cnt=1;
                }else if(sd==s){
                    cnt++;
                }
            }
            cout << sd << endl;
            cout << cnt << endl;
    }
    return 0;
}
