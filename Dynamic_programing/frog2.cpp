// Problem Statement
// There are 
// N stones, numbered 
// 1,2,…,N. For each 
// i (
// 1≤i≤N), the height of Stone 
// i is 
// h 
// i
// ​
//  .

// There is a frog who is initially on Stone 
// 1. He will repeat the following action some number of times to reach Stone 
// N:

// If the frog is currently on Stone 
// i, jump to one of the following: Stone 
// i+1,i+2,…,i+K. Here, a cost of 
// ∣h 
// i
// ​
//  −h 
// j
// ​
//  ∣ is incurred, where 
// j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone 
// N.

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> dp(N,-1);
int h[N],k;
int frog(int i){
    int cost =INT_MAX;
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            int a=frog(i-j)+abs(h[i]-h[i-j]);
            cost=min(cost,a);
        }
    }
    return dp[i]=cost;
}
int main(){
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>h[i];
    cout<<frog(n-1)<<endl;
}