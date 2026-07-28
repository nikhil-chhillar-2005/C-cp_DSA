// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int p=i&1;
        for(int j=1;j<=i;j++){
            cout<<p<<" "; 
            p^=1;
        }
        cout<<endl;
    }
}