// print factorial of n here 1<=n<=1e5+7; in this case we have to use long long int to store the factorial value as it can be very large
#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
const int N=1e5+7;
long long fact[N];
int main()
{
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<N;i++)
    {
        fact[i]=(fact[i-1]*i)%m;
    }
    int n;
    cin>>n;
    cout<<fact[n]<<endl;
}