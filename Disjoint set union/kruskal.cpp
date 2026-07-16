#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
int sz[N];
void make(int v){
    parent[v]=v;
    sz[v]=1;
}

int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
}
void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    int cost=0;
    for(int i=1;i<=n;i++) make(i);
    sort(edges.begin(),edges.end());
    for(auto edge:edges){
        int wt=edge.first,
        u=edge.second.first,
        v=edge.second.second;
        if(find(u)==find(v)) continue;
        Union(u,v);
        cost+=wt;
    }
    cout<<cost;
}