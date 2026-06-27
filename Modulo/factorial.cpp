// print fct(n)%m where m=50 and 1<=n<=100
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=47;
    long long fct=1;
    for(int i=1;i<=n;i++)
    {
        fct=(fct*i)%m;
    }
    cout<<fct<<endl;
}