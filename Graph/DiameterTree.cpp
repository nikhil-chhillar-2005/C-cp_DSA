#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> Graph[N];
int depth[N];

void dfs(int v,int par=0){
    for(int child:Graph[v]){
        if(child==par) continue;
        depth[child]=depth[v]+1;
        dfs(child,v);
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
    int mx_depth=-1;
    int mxnode;
    for(int i=0;i<=n;i++){
        if(mx_depth<depth[i]){
            mx_depth=depth[i];
            mxnode=i;
        }
        depth[i]=0;
    }
    dfs(mxnode);
    mx_depth=-1;
    for(int i=0;i<=n;i++){
        if(mx_depth<depth[i]){
            mx_depth=depth[i];
        }
    }
    cout<<mx_depth;

}