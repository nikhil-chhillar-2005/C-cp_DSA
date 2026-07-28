//    A
//   ABA
//  ABCBA
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<(char)(a+j);
        }
        for(int j=i-2;j>=0;j--){
            cout<<(char)(a+j);
        }
        cout<<endl;
    }
}