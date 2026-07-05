// Given Q queries ,Q<=10^5
// in each Query given V ,you have to find sum of subtree and count even number of edge in that subtree
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> graph[N];
vector<int> subtree_sum(N);
vector<int> even_ct(N);

void dfs(int vertex,int par=0){
    subtree_sum[vertex]+=vertex;
    if(vertex%2==0) even_ct[vertex]++;

    for(int child:graph[vertex]){
        if(child==par) continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
        even_ct[vertex]+=even_ct[child];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    for(int i=0;i<n;i++){
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int v;
    //     cin>>v;
    //     cout<<subtree_sum[v]<<" "<<even_ct[v]<<endl;
    // }
}