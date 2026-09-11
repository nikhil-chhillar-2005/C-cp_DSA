// : Given an array of integers A and an integer B. Find the total number of subarrays having bitwise XOR of all elements equal to k.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    unordered_map<int,int> mp;
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum^=arr[i];
        if(xorSum==k){
            ans++;
        }
        int temp=xorSum^k;
        if(mp.find(temp)!=mp.end()){
            ans+=mp[temp];
        }
        mp[xorSum]++;
    }
    cout<<ans<<endl;
}