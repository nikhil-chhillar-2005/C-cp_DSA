#include<bits/stdc++.h>
using namespace std;
const int N=1e3+7;
const int INF=1e9+10;

int val[N][N];
int level[N][N];
int visited[N][N];
int n,m;
vector<pair<int,int>> movements={
    {0,1},{0,-1},{1,0},{-1,0},
    {1,1},{-1,1},{1,-1},{-1,-1}
};

bool isvalid(int i,int j){
    return (i>=0 && j>=0 && i<n && j<m );
}


int bfs(){
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx=max(mx,val[i][j]);
        }
    }
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mx==val[i][j]){
                q.push({i,j});
                visited[i][j]=1;
                level[i][j]=0;
            }
        }
    }
    int ans=0;
    while(!q.empty()){
        auto v=q.front();
        int vx=v.first;
        int vy=v.second;
        q.pop();
        for(auto movement:movements){
            int childx=vx+movement.first;
            int childy=vy+movement.second;
            if(!isvalid(childx,childy)) continue;
            if(visited[childx][childy]) continue;
            q.push({childx,childy});
            level[childx][childy]=level[vx][vy]+1;
            visited[childx][childy]=1;
            ans=max(ans,level[childx][childy]);
        }
    }
    return ans;
}

void reset(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visited[i][j]=0;
            level[i][j]=INF;
        }
}
}

int main(){
   int T;
   cin>>T;
   while(T--){
    cin>>n>>m;
    reset();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>val[i][j];
        }
    }
    cout<<bfs()<<endl;
   }
    

}