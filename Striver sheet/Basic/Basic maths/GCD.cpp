// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}