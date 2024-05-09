#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
typedef long long int lli;
const int N=1e5+7;
int nums[N];
 
#define cn(n)           cin>>n;
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
int main()
{
    Alauddin
    w(t){
        int n;
        cin>>n;
        n--;
        int num[n+1]={0};
        REP(i, 1, n) cin >> num[i];
        vi v(n + 1, 0);
        num[0] = 0;
        REP(i, 1, n) num[i] = num[i - 1] + num[i];
        REP(i, 0, n) num[i] = 1000 + num[i];
        REP(i, 0, n) cout << num[i] << " ";
        cout << endl;
    }
    return 0;
}