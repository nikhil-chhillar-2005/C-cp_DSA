//     *
//    ***
//   *****
//  *******
// *********
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int j=1;j<=s;j++){
            cout<<"*";
        }
        cout<<endl;
        s+=2;
    }
}