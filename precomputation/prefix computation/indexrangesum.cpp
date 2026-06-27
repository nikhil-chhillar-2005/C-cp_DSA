// print index sum by precomputing prefix sum array
#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+7;
int prefix[N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        prefix[i]=prefix[i-1]+x;
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;
    }
}