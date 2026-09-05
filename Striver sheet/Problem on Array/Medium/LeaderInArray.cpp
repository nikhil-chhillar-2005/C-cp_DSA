#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> leaders(vector<int> &arr){
        int n=arr.size();
        vector<int> ans;
        int max=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=max){
                ans.push_back(arr[i]);
                max=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution sol;
    vector<int> result = sol.leaders(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}