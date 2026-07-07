// Given an undirected tree with N nodes labeled from 1 to N.

// Each node has a certain weight assigned to it given by an integer array A of size N.

// You need to delete an edge in such a way that the Product between the sum of weights of nodes in one subtree with the sum of weights of nodes in other subtree is maximized.

// Return this maximum possible product modulo 109 + 7.

// NOTE:

// The tree is rooted at a node labeled with 1.
// You need to return the maximum possible product, then take its mod.
// Problem Constraints
// 2 <= N <= 105

// 1 <= A[i] <= 103

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> Graph[N];
int subtree_sum[N];
int val[N];
const int M=1e9+7;
void dfs(int v,int par=0){
    subtree_sum[v]=val[v];
    for(int child:Graph[v]){
        if(child==par) continue;
        dfs(child,v);
        subtree_sum[v]+=subtree_sum[child];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    dfs(1);
    long long ans=0;
    for(int i=2;i<=n;i++){
        int part1=subtree_sum[i];
        int part2=subtree_sum[1]-part1;
        ans=max(ans,(part1*1LL*part2)%M);
    }
    cout<<ans;
}