// A
// BB
// CCC
// DDDD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)(a+i);
        }
        cout<<endl;
    }
}