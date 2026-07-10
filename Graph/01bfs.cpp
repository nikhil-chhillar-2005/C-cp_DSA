#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
const int INF=1e9+10;

vector<pair<int,int>> g[N];
vector<int> level(N,INF);
int n,m;

int bfs(){
    deque<int> q;
    q.push_back(1);
    level[1]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop_front();
        for(auto child:g[cur]){
            int childv=child.first;
            int wt=child.second;
            if(level[cur]+wt<level[childv]){
                level[childv]=level[cur]+wt;
                if(wt==1) q.push_back(childv);
                else q.push_front(childv);
            }
        }
    }
    return level[n];
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back({y,0});
        g[y].push_back({x,1});
    }
    cout<<bfs()<<endl;

}