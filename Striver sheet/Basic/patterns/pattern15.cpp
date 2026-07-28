// ABCD
// ABC
// AB
// A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a='A';
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<(char)(a+j);
        }
        cout<<endl;
    }
}