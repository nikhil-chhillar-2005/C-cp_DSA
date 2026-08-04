// 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ans=0;
    while(a>0){
        ans=ans*10+a%10;
        a/=10;
    }
    cout<<ans;
}