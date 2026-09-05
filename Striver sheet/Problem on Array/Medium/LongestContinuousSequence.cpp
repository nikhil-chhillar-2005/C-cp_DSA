// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(auto &val:s){
            if(s.contains(val-1))
                continue;
            int num=val;
            int cur=1;
            while(s.contains(num+1)){
                num++;
                cur++;
            }
            ans=max(ans,cur);
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sol;
    int result = sol.longestConsecutive(nums);
    cout<<result;
}