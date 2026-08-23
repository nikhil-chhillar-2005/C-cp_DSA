// Problem Statement: Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int longestzerosum(vector<int> a){
        int sum=0;
        unordered_map<int,int> mpp;
        int mx=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            if(sum==0){
                mx=i+1;
            }
            else{
                if(mpp.find(sum)!=mpp.end()){
                    mx=max(mx,i-mpp[sum]);
                }else{
                    mpp[sum]=i;
                }
            }
        }
        return mx;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    solution sol;
    cout<<sol.longestzerosum(a);
}