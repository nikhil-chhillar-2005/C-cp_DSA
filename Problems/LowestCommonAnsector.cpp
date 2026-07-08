#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> Graph[N];
vector<int> parent(N);
void dfs(int v,int par=-1){
    parent[v]=par;
    for(int child:Graph[v]){
        if(child==par) continue;
        dfs(child,v);
    }
}

vector<int> path(int v){
    vector<int> ans;
    while(v!=-1){
        ans.push_back(v);
        v=parent[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
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
    int x,y;
    cin>>x>>y;
    vector<int>path_x=path(x);
    vector<int>path_y=path(y);
    int l=min(path_x.size(),path_y.size());
    int ans=-1;
    for(int i=0;i<l;i++){
        if(path_x[i]==path_y[i]) ans=path_x[i];
        else break;
    }
    
    cout<<ans;

}