#include<bits/stdc++.h>
using namespace std;
void increment(int &x)
{
    x++;
}
int main()
{
    int a=5;
    cout<<a<<endl;
    increment(a);
    int b=7;
    swap(a,b);
    cout<<a;
}