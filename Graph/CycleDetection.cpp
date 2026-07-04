#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> Graph[N];
vector<bool> visited(N,0);
bool dfs(int v,int par){
    visited[v]=1;
    bool ans=false;
    for(int child:Graph[v]){
        if(visited[child]&&child==par) continue;
        if(visited[child]==true) return true;
        ans=ans|dfs(child,v);
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }
    cout<<dfs(1,0);
}
