// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0, ans = 0;

        for(int x : nums) {
            sum += x;

            if(mp.count(sum - k))
                ans += mp[sum - k];

            mp[sum]++;
        }

        return ans;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    int ans = s.subarraySum(nums, k);
    cout << ans << endl; 
}