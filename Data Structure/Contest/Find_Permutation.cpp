#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>nums(2*n);
        for(int i=0;i<2*n;i++) cin >> nums[i];
        next_permutation(nums.begin(), nums.end());
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            p[i] = nums[i + n];
        }
        for (int num : p) {
            cout << num << " ";
        }
        cout<<endl;
    }
    
    return 0;
}