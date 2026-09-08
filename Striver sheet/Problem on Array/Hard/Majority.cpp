// in this problem, we are given an array of size n and we need to find all the elements that appear more than n/3 times in the array. The solution uses the Boyer-Moore Voting Algorithm to find the majority elements efficiently.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         

        vector<int>ans;
        int n = nums.size();
        int target = n / 3;

        int count1 = 0;
        int count2 = 0;

        int maj1 = 0;
        int maj2 = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == maj1){
                count1++;
            }
            else if(nums[i] == maj2){
                count2++;
            }
            else if(count1 == 0){
                maj1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                maj2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }     
        count1 = 0;
        count2 = 0;

        for(int num : nums){
            if(num == maj1)
               count1++;
            else if(num == maj2)
              count2++;
        }
        if(count1 > target)
           ans.push_back(maj1);
        
        if(count2 > target)
            ans.push_back(maj2);
    
      return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    vector<int>ans=s.majorityElement(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}