#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
bool isNonDecreasing(vi v, int l, int r) {
    for (int i = l + 1; i <= r; i++) {
        if (v[i] < v[i - 1]) {
            return false;
        }
    }
    return true;
}
int main()
{
    Alauddin
    w(t){
        int n;cin>>n;
        vi v(n);
        REP(i,0,n-1) cin>>v[i];
        int count = 0;
        for(int l = 0; l < n; l++){
            for(int r = l; r < n; r++){
                if (isNonDecreasing(v, l, r)) {
                    count++;
                }
            }
        }
        cout << count << endl;

        // for(int l = 0; l < n; l++){
        //     for(int r = l; r < n; r++){
        //         if (isNonDecreasing(v, l, r)) {
        //             cout << "[";
        //             for(int i = l; i <= r; i++){
        //                 cout << v[i];
        //                 if(i != r) cout << ",";
        //             }
        //             cout << "]";
        //         }
        //     }
        // }
        // cout << endl;
    }
    return 0;
}