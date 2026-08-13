// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int l1=-INT_MAX,l2=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>l1){
            l2=l1;
            l1=x;
        }else if(x>l2){
            l2=x;
        }
    }
    cout<<l2<<endl;
    return 0;
}