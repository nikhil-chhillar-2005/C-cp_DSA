// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    Solution sol;
    int t;
    cin>>t;
    auto ans=sol.twoSum(num,t);
    cout<<ans[0]<<" "<<ans[1];
}