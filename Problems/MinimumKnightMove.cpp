// // // Anjali and Nakul are good friends. They both had a quarrel recently while playing chess. Nakul wants to know the minimum number of moves a knight takes to reach from one square to another square of a chess board (8 × 8). Nakul is brilliant and he had already written a program to solve the problem. Nakul wants to know whether Anjali can do it. Anjali is very weak in programming. Help her to solve the problem.

// // A knight can move in the shape of an "L" in a chessboard - two squares either forward, backward, left, or right and then one square to its left or right. A knight move is valid if it moves as mentioned above and it is within the boundary of the chessboard (8 × 8).
// There are T test cases in total. The next T lines contain two strings (start and destination) separated by a space.

// The strings start and destination will only contain two characters - First character is an alphabet between 'a' and 'h' (inclusive), Second character is a digit between '1' and '8' (inclusive) - (Quotes just for clarity).

// To know the knight moves more clearly refer to the above figure.

// Output
// Print the minimum number of moves a knight takes to reach from start to destination in a separate line.

// Constraints
// 1 ≤ T ≤ 4096

#include<bits/stdc++.h>
using namespace std;
int visited[8][8];
const int INF=1e9+7;
int level[8][8];
int getx(string s){
    return s[0]-'a';
}
int gety(string s){
    return s[1]-'1';
}

vector<pair<int,int>> movements={
    {-1,2},{1,2},
    {-1,-2},{1,-2},
    {2,-1},{2,1},
    {-2,-1},{-2,1}
};
bool valid(int x,int y){
    return (x>=0&&y>=0&&x<8&&y<8);
}
int bfs(string src,string dest){
    int srcx=getx(src);
    int srcy=gety(src);
    int destx=getx(dest);
    int desty=gety(dest);
    level[srcx][srcy]=0;
    visited[srcx][srcy]=1;
    queue<pair<int,int>> q;
    q.push({srcx,srcy});
    while(!q.empty()){
        pair<int,int> v=q.front();
        q.pop();
        int x=v.first,y=v.second;
        for(auto movement:movements){
            int childx=movement.first+x;
            int childy=movement.second+y;
            if(!valid(childx,childy)) continue;
            if(!visited[childx][childy]){
                q.push({childx,childy});
                level[childx][childy]=level[x][y]+1;
                visited[childx][childy]=1;
            }
        }
        if(level[destx][desty]!=INF){
            break;
        }
    }
    return level[destx][desty];
}
void reset(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            level[i][j]=INF;
            visited[i][j]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        reset();
        string src,dest;
        cin>>src>>dest;
        int ans=bfs(src,dest);
        cout<<ans<<endl;
    }
}