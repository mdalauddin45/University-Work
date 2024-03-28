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

int main()
{
    Alauddin

    w(t)
    {
        lli a;
        cin >> a;
        string s = to_string(a);
        if (count(s.begin(), s.end(), '0') + count(s.begin(), s.end(), '1') == s.size())
        {
            cout << "YES" << endl;
            continue;
        }

        while (a > 1)
        {
            int cnt = 0;
            vi v;
            for (int i = 1; i <= sqrt(a); i++)
            {
                if (a % i == 0)
                {
                    v.push_back(i);
                    if (i != a / i)
                        v.push_back(a / i);
                }
            }

            sort(v.begin(), v.end());
            v.erase(v.begin());
            reverse(v.begin(), v.end());

            for (int i = 0; i < v.size(); i++)
            {
                string s1 = to_string(v[i]);
                if (count(s1.begin(), s1.end(), '0') + count(s1.begin(), s1.end(), '1') == s1.size())
                {
                    a /= v[i];
                    cnt = 1;
                    break;
                }
            }

            if (cnt == 0)
            {
                cout << "NO" << endl;
                break;
            }
        }

        if (a == 1)
            cout << "YES" << endl;
    }

    return 0;
}