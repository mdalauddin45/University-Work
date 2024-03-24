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

const int N=1005;
bool vis[N];
vi vac[N];
int depth[N];

void dfs(int node, int d) {
    vis[node] = true;
    depth[node] = d;
    for (int i = 0; i < vac[node].size(); i++) {
        int child = vac[node][i];
        if (!vis[child]) {
            dfs(child, d + 1);
        }
    }
}

int main() {
    Alauddin
    w(t){
        int n,k;
        cin>>n>>k;
        REP(i,0,n-2){
            int u,v;
            cin>>u>>v;
            vac[u].push_back(v);
            vac[v].push_back(u);
        }
        dfs(k, 0); // Start DFS from node k with depth 0
        REP(i,0,n-2){
            cout<<"Node "<<i<<" has depth "<<depth[i]<<endl;
        }
        // Reset arrays for the next test case
        memset(vis, false, sizeof(vis));
        memset(depth, 0, sizeof(depth));
        REP(i,1,n) vac[i].clear();
    }
    return 0;
}
