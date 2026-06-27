#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<bool> isprime(N,1);
vector<pair<int,int>>hl(N,{0,0});
vector<int> divisor[N];
int main(){
    // isprime[0]=isprime[1]=false;
    // for(int i=2;i<N;i++){
    //     if(isprime[i]){
    //         for(int j=i*2;j<N;j+=i){
    //             isprime[j]=false;
    //             hl[j].second=i;
    //             if(hl[j].first==0){
    //                 hl[j].first=i;
    //             }
    //         }
    //     }
    // }
    for(int i=2;i<N;i++){
                for(int j=i*2;j<N;j+=i){
               divisor[j].push_back(i);
            }
    
    }
    for(auto a:divisor[20]) cout<<a<<" ";
    // for(int i=1;i<=100;i++){
    //      cout<<hl[i].first<<" "<<hl[i].second<<endl;;
    // }
//    int num=64;
//    vector<int> prm;
//    while(num>1){
//     int p=hl[num].first;
//     while(num%p==0){
//         num/=p;
//         prm.push_back(p);
//     }
//    }
//    for(int factor:prm) cout<<factor<<" ";

}