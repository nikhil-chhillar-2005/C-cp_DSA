#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int fun(string a,string b,int i,int j){
  
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans= 1+fun(a,b,i-1,j-1);
    ans=max(ans,fun(a,b,i-1,j));
    ans=max(ans,fun(a,b,i,j-1));
    return dp[i][j]=ans;
  
}

int longestCommonSubsequence(string text1, string text2) {
    memset(dp,-1,sizeof(dp));
    return fun(text1,text2,text1.size()-1,text2.size()-1);

}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<longestCommonSubsequence(a,b);
}