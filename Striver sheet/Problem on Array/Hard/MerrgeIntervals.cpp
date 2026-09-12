// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(auto interval:intervals){
            if(ans.empty()||ans.back()[1]<interval[0]){
                ans.push_back(interval);
            }else{
                ans.back()[1]=max(ans.back()[1],interval[1]);
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>> intervals(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    Solution obj;
    vector<vector<int>> ans=obj.merge(intervals);
    for(auto interval:ans){
        cout<<interval[0]<<" "<<interval[1]<<endl;
    }
}