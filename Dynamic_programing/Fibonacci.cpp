#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> dp(N,-1);
// top-down
int fibo(int a){
    if(a==0) return 0;
    if(a==1) return 1;
    if(dp[a]!=-1) return dp[a];
    return dp[a]=fibo(a-1)+fibo(a-2);
}

int main(){
    int n=fibo(6);
    cout<<n<<endl;
    // bottom up
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
}