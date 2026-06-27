#include<bits/stdc++.h>
using namespace std;
long long M=1e18;
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
long long binExpRec(long long a,long long b){
    long long ans=1;
   while(b){
    if(b&1){
        ans=binMul(ans,a);
    }
    a=binMul(a,a);
    b>>=1;
   }
   return ans;
}

long long binMul(long long a,long b){
     long  long ans=1;
   while(b){
    if(b&1){
        ans=(ans+a)%M;
    }
    a=(a+a)%M;
    b>>=1;
   }
   return ans;
}

int main(){
    cout<<binExpRec(5,2);
}