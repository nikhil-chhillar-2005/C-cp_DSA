// The frequency of an element is the number of times it occurs in an array.

// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

// Return the maximum possible frequency of an element after performing at most k operations.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long left=0;
        long long cur=0;
        for(int right=0;right<nums.size();right++ ){
            int target=nums[right];
            cur+=nums[right];
            if((right-left+1)*target - cur>k){
                cur-=nums[left];
                left++;
            }
        }
        return nums.size()-left;
    }
};
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    Solution s=Solution();
    cout<<s.maxFrequency(num,k);
}