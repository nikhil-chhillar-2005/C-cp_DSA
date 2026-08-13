// Problem Statement: Given an array, we have to find the largest element in the array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=-INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>ans){
            ans=x;
        }
    }
    cout<<ans<<endl;

}