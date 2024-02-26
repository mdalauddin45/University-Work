#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> p;

#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)

bool isPossibleToSplit(vector<int>& nums) {
    if (nums.size() % 2 != 0) {
        return false;
    }
    
    unordered_map<int, int> count;
    for (int num : nums) {
        count[num]++;
    }
    
    if (count.size() != nums.size() / 2) {
        return false;
    }
    
    return true;
}
long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n = bottomLeft.size();
        long long maxSquareSide = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int x1 = max(bottomLeft[i][0], bottomLeft[j][0]);
                int y1 = max(bottomLeft[i][1], bottomLeft[j][1]);
                int x2 = min(topRight[i][0], topRight[j][0]);
                int y2 = min(topRight[i][1], topRight[j][1]);

                if (x1 < x2 && y1 < y2) {
                    long long side = min(x2 - x1, y2 - y1);
                    maxSquareSide = max(maxSquareSide, side);
                }
            }
        }

        long long maxSquareArea = maxSquareSide * maxSquareSide;
        return maxSquareArea;
    }
int main() {
    Alauddin
    int n;
    cin >> n;
    vector<int> arr(n); // Using vector instead of an array
    REP(i, 0, n - 1) cin >> arr[i];
    isPossibleToSplit(arr) ? cout << "True" << endl : cout << "False" << endl;
    return 0;
}
