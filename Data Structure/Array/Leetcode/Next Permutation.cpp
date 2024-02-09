#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(), nums.end());
    for(auto num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >>nums[i];
    nextPermutation(nums);
    return 0;
}