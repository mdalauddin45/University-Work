#include<bits/stdc++.h>
using namespace std;

int mincost(int n) {
    int cost = 0;
    string br = bitset<32>(n).to_string();
    for (int i = 0; i < br.length() - 2; ++i) {
        if (br.substr(i, 3) == "101") {
            int x = br.length() - i - 3;
            cost += pow(2, x);
        }
        
    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int result = mincost(n);
        cout << result << endl;
    }
    return 0;
}
