// dfs by adjacency list
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> graph[N];
bool visited[N];
void dfs(int vertex){
    // take action on vertex  after entring in vertex
    cout<<vertex<<endl;
    visited[vertex]=1;
    for(int child:graph[vertex]){
        // take action on child befor entring child node
        if(visited[child]) continue;
        dfs(child);

        // take action on child after exiting child node 

    }
    // take action on vertex before exiting vertex

}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);

}