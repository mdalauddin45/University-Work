#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    int N, M, K;
    cin >> N >> M >> K;

    bool possible = false;
    for (int r = 0; r <= N; ++r) {
        for (int c = 0; c <= M; ++c) {
            int black_squares = r * M + c * N - 2 * r * c;
            if (black_squares == K) {
                possible = true;
                break;
            }
        }
    }

    if (possible)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}