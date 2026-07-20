// https://leetcode.com/problems/partition-equal-subset-sum/description/
#include<bits/stdc++.h>
using namespace std;
vector<long long>value(105),wt(105);
int dp[205][20005];

int func(int in,int sum,vector<int>&num){


    if(sum==0) return true;
    if(in<0) return false;
    if(dp[in][sum]!=-1) return dp[in][sum];
    bool isp=func(in-1,sum,num);

    if(sum-num[in]>=0){
         isp|=func(in-1,sum-num[in],num);
    }
    return dp[in][sum]=isp;

}

bool canPartition(vector<int>&nums){
    memset(dp,-1,sizeof(dp));
    int sum=accumulate(nums.begin(),nums.end(),0);
    if(sum&1) return 0;
    sum/=2;
    return func(nums.size()-1,sum,nums);
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<canPartition(v);

}