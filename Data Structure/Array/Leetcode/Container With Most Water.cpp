#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;
    int mx = 0;
    while (l < r) {
        int w = r - l;
        int h = min(height[l], height[r]);
        int area = h * w;
        mx = max(mx, area);
        if (height[l] < height[r]) 
            l++;
        else if (height[l] > height[r]) 
            r--;
        else {
            r--;
        }
    }
    return mx;
}

int main() {
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++) cin>>v[i];
    
    cout<< maxArea(v) << endl;

    return 0;
}
