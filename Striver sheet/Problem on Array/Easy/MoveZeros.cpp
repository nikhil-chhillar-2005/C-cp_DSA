// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i=0;
        for(int j=0;j<a.size();j++){
            if(a[j]!=0){
                a[i]=a[j];
                i++;
            }
        }
        for(;i<a.size();i++){
            a[i]=0;
        }
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    s.moveZeroes(a);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}