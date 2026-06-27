// the tree are cut at h height and the wood are collected
// the wood collected should be at least m
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,m;
long long tree[N];
bool isWoodSufficent(long long h){
    long long wood=0;
    for(int i=0;i<n;i++){
        if(tree[i]>h){
            wood+=tree[i]-h;
        }
    }
    return wood>=m;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    long long low=0,high=1e6+10;
    while(high-low>1){
        long long mid=(low+high)/2;
        if(isWoodSufficent(mid)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    if(isWoodSufficent(high)){
        cout<<high<<endl;
    }
    else{
        cout<<low<<endl;
    }
    // TC: O(nlog(H)) where H is the maximum height of the tree
    // SC: O(n) for storing the tree heights
}