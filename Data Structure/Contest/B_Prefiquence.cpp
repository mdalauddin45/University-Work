#include<bits/stdc++.h>
using namespace std;

#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Alauddin
    w(x) {
        int n, m; 
        cin >> n >> m;

        string a, b; 
        cin >> a >> b;

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
            }
            j++;
        }

        cout << i << endl;
    }
    return 0;
}
