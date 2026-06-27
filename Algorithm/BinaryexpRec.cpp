#include<bits/stdc++.h>
using namespace std;
int M=1e9+7
// int binExpRec(int a,int b){
//     if(b==0) return 1;
//     int res=binExpRec(a,b/2);

//     if(b&1){
//         return a*res*res;
//     }
//     else{
//         return res*res;
//     }
// }
// iteration
int binExpRec(int a,int b,int m){
    int ans=1;
   while(b){
    if(b&1){
        ans=(ans*a)%m;
    }
    a=a*a%m;
    b>>=1;
   }
   return ans;

    
}
int main(){
    cout<<binExpRec(50,binExpRec(32,64,M-1),M);
}