#include<bits/stdc++.h>
using namespace std;
int N=1e7+7;
vector<bool> isprime(N,1);
int main(){
    isprime[0]=isprime[1]=false;
    for(int i=2;i<N;i++){
        if(isprime[i]){
            for(int j=i*2;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
    cout<<isprime[2];
}