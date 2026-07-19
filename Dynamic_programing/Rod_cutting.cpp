// Given a rod of length n inches and an array price[], where price[i] denotes the value of a piece of length i. Your task is to determine the maximum value obtainable by cutting up the rod and selling the pieces.

// Note: n = size of price, and price[] is 1-indexed array.

#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int fun(int len,vector<int> &price){
    if(len==0) return 0;
    if(dp[len]!=-1) return dp[len];
    int ans=0;
    for(int lenc=1;lenc<price.size();lenc++){
        if(len-lenc>=0){
              ans=max(ans,fun(len-lenc,price)+price[lenc-1]);
        }
    }
    return dp[len]=ans;
}


int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    vector<int> a(n);
    for(int &X:a) cin>>X;
    cout<<fun(n,a);
}