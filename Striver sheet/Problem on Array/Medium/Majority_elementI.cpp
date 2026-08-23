// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hs;
        for(int i=0;i<nums.size();i++){
            hs[nums[i]]++;
        }
        for(auto [a,b]:hs){
            if(b>nums.size()/2){
                return a;
            }
        }
        return -1;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution sol;
    cout<<sol.majorityElement(a);
}