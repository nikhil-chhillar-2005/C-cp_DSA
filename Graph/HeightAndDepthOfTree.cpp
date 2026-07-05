#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> Graph[N];
vector<int> height(N),Depth(N);

void dfs(int vertex,int par=0){
    for(int child:Graph[vertex]){
        if(child==par) continue;
        Depth[child]=Depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
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
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<height[i]<<" "<<Depth[i]<<endl;
    }
}