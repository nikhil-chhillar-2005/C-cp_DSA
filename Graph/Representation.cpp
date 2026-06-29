#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int graph1[N][N];
int graphwt1[N][N];
vector<int> graph2[N];
vector<pair<int,int>>graphwt2[N];
int main(){
    int n,m;
    cin>>n>>m;
    // for non weightd graph annd non directed
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        // matrix representation
        graph1[x][y]=1;
        graph1[y][x]=1;
        // adjacency list representation
        graph2[x].push_back(y);
        graph2[y].push_back(x);
    }
    // for weighted and non directed graph
    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
         // matrix representation
        graphwt1[x][y]=wt;
        graph1[y][x]=wt;
        // adjacency list representation
        graphwt2[x].push_back({y,wt});
        graphwt2[y].push_back({x,wt});
    }
    // adjacency matrix SC
    // O(n^2) so n<=1e3

    // adjacency list
    // SCO(n+m)so here n<=1e5 and m<=1e7

    // // to check i and j connected
    // if(graph1[i][j]){
    //     connected           O(1)
    // }

    // for(auto list:graph2[i]){
    //     if(list==j)
    //         connected         O(n)
    // }
    
}