//  calculate sum from index(a,b)to (c,d)in a 2D grid by precomputing prefix sum array
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+7;
int prefix[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+x;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        cout<<prefix[c][d]-prefix[a-1][d]-prefix[c][b-1]+prefix[a-1][b-1]<<endl;
    }
}