#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
 
#define cn(n)           cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
string binary_parity(int n) {
    string binary_str = bitset<32>(n).to_string();
    int sum_of_digits = 0;
    for (char digit : binary_str) {
        sum_of_digits += digit - '0';
    }
    if (sum_of_digits % 2 == 0) return "EVEN";
    else return "ODD";
}
int main()
{
    Alauddin
    w(t){
        int n; cin>>n;
        string result = binary_parity(n);
        cout<< result <<endl;
    }
    return 0;
}