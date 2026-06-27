#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int *p1=&a;
    cout<<"address of a "<<&a<<endl;
    cout<<"value of a "<<a<<endl;
    cout<<"value of p1 "<<p1<<endl;
    cout<<"value at address p1 "<<*p1<<endl;
}