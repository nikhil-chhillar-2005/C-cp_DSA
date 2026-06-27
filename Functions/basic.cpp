#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<digit_sum(n);
}