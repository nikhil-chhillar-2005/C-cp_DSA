// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstr=false,firstcol=false;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<m;i++){
            if(matrix[0][i]==0){
                firstr=true;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                firstcol=true;
                break;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstr){
            for(int i=0;i<m;i++){
                matrix[0][i]=0;
            }
        }
        if(firstcol){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    Solution sol;
    sol.setZeroes(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}