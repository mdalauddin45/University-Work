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
int max_min_charm(int n, vector<int>& appetizers, vector<int>& main_dishes) {
    sort(appetizers.begin(), appetizers.end());
    sort(main_dishes.begin(), main_dishes.end());

    int max_charm = 0;
    for (int i = 0; i < n; ++i) {
        int charm = abs(appetizers[i] - main_dishes[i]);
        max_charm = max(max_charm, charm);
    }

    return max_charm;
}
int main()
{
    Alauddin
    w(t){
        int n;
        cin >> n;

        vector<int> appetizers(n);
        vector<int> main_dishes(n);

        for (int i = 0; i < n; ++i) {
            cin >> appetizers[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> main_dishes[i];
        }

        int result = max_min_charm(n, appetizers, main_dishes);
        cout << result << endl;
    }
    return 0;
}