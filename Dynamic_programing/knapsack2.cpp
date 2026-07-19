// https://atcoder.jp/contests/dp/tasks/dp_e
#include<bits/stdc++.h>
using namespace std;
vector<long long>value(105),wt(105);
long long dp[105][100005];

long long fun(int ind,int vall){
    
    if(vall==0) return 0;
    if(ind<1) return 1e15;
    if(dp[ind][vall]!=-1) return dp[ind][vall];
    long long ans=fun(ind-1,vall);
    if(vall-value[ind]>=0)
        ans=min(ans,fun(ind-1,vall-value[ind])+wt[ind]);

    return dp[ind][vall]=ans;
}

int main(){
    long long n,w;
    memset(dp,-1,sizeof(dp));
    cin>>n>>w;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++){
        cin>>wt[i];
        cin>>value[i];
    }
    int maxval=1e5;
    for(int i=maxval;i>=0;--i){
        if(fun(n,i)<=w){
            cout<<i<<endl;
            break;
        }
    }

}