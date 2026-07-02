// Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. total number of edges in the graph. Calculate the total number of connected components in the graph. A connected component is a set of vertices in a graph that are linked to each other by paths.

// Input Format:

// First line of input line contains two integers n and e. Next e line will contain two integers u and v meaning that node u and node v are connected to each other in undirected fashion. 

// Output Format:

// For each input graph print an integer x denoting total number of connected components.

// Constraints:

// All the input values are well with in the integer range.

#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> graph[N];
bool visited[N];
vector<vector<int>> cc;
vector<int> curent_cc;
void dfs(int v){
    visited[v]=1;
    curent_cc.push_back(v);
    for(auto child:graph[v]){
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=n;i++){
        
        if(visited[i]) continue;
        curent_cc.clear();
        dfs(i);
        cc.push_back(curent_cc);
        ct++;
    }
    cout<<cc.size()<<endl;
    for(auto x:cc){
        for(int v:x){
            cout<<v<<" ";
        }
        cout<<endl;
    }
}