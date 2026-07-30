// D
// CD
// BCD
// ABCD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            cout<<char(j+'A');
        }
        cout<<endl;
    }
}