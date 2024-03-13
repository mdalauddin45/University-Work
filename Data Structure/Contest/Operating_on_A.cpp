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
bool possibleTransformation(vi A, vi B) {
    int n = A.size();
     for (int i = 1; i < n - 1; ++i) { 
        int diff = B[i] - A[i];
        A[i - 1] += diff;
        A[i] -= diff;
        A[i + 1] -= diff;
        A[i + 2] += diff;
        if (A[i] != B[i])
            return false;
    }
    return A == B;
} 
int main()
{
    Alauddin
    w(t){
        int n;
        cin >> n;
        vi A(n), B(n);
        REP(i,0,n-1) cin >> A[i];
        REP(i,0,n-1) cin >> B[i];
        if (possibleTransformation(A, B)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}