// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

// The union of two arrays can be defined as the common and distinct elements in the two arrays.

// NOTE: Elements in the union should be in ascending order.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0,c=0;
    vector<int>ans;
    while(i<n&&j<n){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }else{
            ans.push_back(b[j]);
            j++;
        }
        c++;
    }
    while(i<n){
        ans.push_back(a[i]);
        c++;
        i++;
    }
    while(j<m){
        ans.push_back(b[j]);
        c++;
        j++;
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}