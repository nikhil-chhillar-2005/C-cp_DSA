// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// we solve it by kdane's algorithm which is a dynamic programming approach to solve the maximum subarray sum problem in linear time.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int currsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};

int main(){
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
    return 0;
}