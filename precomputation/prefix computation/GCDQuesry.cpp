// fid gcd of element which not in range from l to r index of array by precomputing prefix gcd array
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int prefix[N];
int suffix[N];

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        prefix[i]=__gcd(prefix[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){

        suffix[i]=__gcd(suffix[i+1],a[i]);
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<__gcd(prefix[l-1],suffix[r+1])<<endl;
    }
}