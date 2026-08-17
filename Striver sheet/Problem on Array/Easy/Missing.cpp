// Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool>v(n+1,0);
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        v[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(!v[i]){
            cout<<i<<endl;
            return 0;
        }
    }
}