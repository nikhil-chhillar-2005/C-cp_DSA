// Check if a number is Palindrome or Not

// Problem Statement: Given an integer N, return true if it is a palindrome else return false.

// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ans=0,b=a;
    while(a>0){
        ans=ans*10+a%10;
        a/=10;
    }
    cout<<(ans==b);
}