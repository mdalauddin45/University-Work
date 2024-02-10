#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int left =0;
        int right =nums.size()-1;
        while (left<=right)
        {
            int mid =(left+right)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid] <target) left = mid+1;
            else right = mid-1;
        }
        return left;
        
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int t;
    cin>>t;
    cout<<searchInsert(v, t)<<endl;
    return 0;
}