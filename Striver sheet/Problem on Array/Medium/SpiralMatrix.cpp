// Given an m x n matrix, return all elements of the matrix in spiral order.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int botom=matrix.size()-1,right=matrix[0].size()-1;
        vector<int>ans;
        int top=0,left=0;
        while(top<=botom&&left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top+=1;
            for(int i=top;i<=botom;i++){
                ans.push_back(matrix[i][right]);
            }
            right-=1;
            if(top<=botom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[botom][i]);
                }
                botom-=1;
            }if(left<=right){
                for(int i=botom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left+=1;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans=s.spiralOrder(matrix);
    for(auto it:ans){
        cout<<it<<" ";
    }
}