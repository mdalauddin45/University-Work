#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto num: nums1) v.push_back(num);
        for(auto num: nums2) v.push_back(num);
        sort(v.begin(), v.end());
        int n=v.size();
        if(n%2==1) return v[n/2];
        else return (v[n/2-1]+v[n/2])/2.0;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> num1(n);
    vector<int> num2(m);
    for (int i = 0; i < n; i++) cin >> num1[i];
    for (int i = 0; i < m; i++) cin >> num2[i];
    double median = findMedianSortedArrays(num1, num2);
    cout<<fixed<<setprecision(5)<< median << endl;
    return 0;
}
