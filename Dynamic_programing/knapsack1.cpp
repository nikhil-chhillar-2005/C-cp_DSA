// https://atcoder.jp/contests/dp/tasks/dp_d
#include<bits/stdc++.h>
using namespace std;
vector<long long>value(105),wt(105);
long long dp[105][100005];

long long fun(int ind,int wet){
    if(dp[ind][wet]!=-1) return dp[ind][wet];
    if(ind==0) return 0; 
    long long val=fun(ind-1,wet);
    if(wet-wt[ind]>=0)
        val=max(val,fun(ind-1,wet-wt[ind])+value[ind]);
    
    return dp[ind][wet]=val;
}

int main(){
    int n,w;
    cin>>n>>w;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++){
        cin>>wt[i];
        cin>>value[i];
    }
    cout<<fun(n,w);

}