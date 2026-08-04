// Problem Statement: Given an integer N, return the number of digits in N.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ans=0;
    while(a>0){
        a/=10;
        ans++;
    }
    cout<<ans;
}
