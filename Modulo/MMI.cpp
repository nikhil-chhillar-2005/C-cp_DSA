// (a+b)%m=(a%m+b%m)%m
// (a-b)%m=(a%m - b%m)%m;
// (a*b)%m=(a%m * b%m)%m;
// (a/b)%m=((a%m)*(b^-1 %m))%m b^-1=modularmultiplicative inverse of b
// if b and m are coprime then MMI exist


// There are N children and K toffees, where K < N.
// Count the number of ways to distribute the toffees among the children such that each student gets at most 1 toffee.
// Output the answer as nCk modulo M, where M = 10^9 + 7.
// Constraints:
// 1 ≤ K < N ≤ 10^6
// Formula:
// nCk = n! / ((n - k)! * k!)
#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
int N=1e6+5;
long long binExpRec(int a,int b,int m){
    long long ans=1;
    a%=m;
   while(b){
    if(b&1){
        ans=(1LL*ans*a)%m;
    }
    a=(1LL*a*a)%m;
    b>>=1;
   }
   return ans;

    
}
int main(){
    vector<int> fact(N,1);
    for(int i=2;i<N;i++){
        fact[i]=(fact[i-1] * 1LL*i)%M;
    }
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        long long ans=fact[n];
        long long den=(fact[n-k]*1LL*fact[k])%M;
        ans=(1LL*ans* binExpRec(den,M-2,M))%M;
        cout<<ans<<endl;
       
    }


}