// dfs by adjacency list
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> graph[N];
bool visited[N];
int level[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s]=1;
   
    while(!q.empty()){
        int cur=q.front();
         cout<<cur<<" ";
        q.pop();
        for(int child:graph[cur]){
            if(visited[child]) continue;
            q.push(child);
            visited[child]=1;
            level[child]=level[cur]+1;
        }
    }
}
// Time Complexity=O(n+e)

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(1);
    for(int i=1;i<n;i++){
        cout<<i<<":"<<level[i]<<endl;
    }
}