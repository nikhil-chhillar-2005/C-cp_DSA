#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, len = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 1) {
                mx = max(len, mx);
                len = 0;
            } else
                len++;
        }
        mx=max(mx,len);
        return mx;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution s;
    cout<<s.findMaxConsecutiveOnes(arr);
}