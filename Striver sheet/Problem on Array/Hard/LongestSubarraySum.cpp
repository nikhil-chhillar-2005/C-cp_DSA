//  Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    unordered_map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            ans=i+1;
        }else{
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
    }
    cout<<ans<<endl;
}