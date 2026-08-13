// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.
#include <bits/stdc++.h> // include all standard headers
using namespace std;

#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    int ans=1;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        if(x<prev){
            ans=0;
        }
        prev=x;
    }
    cout<<(ans==1?"true\n":"false\n");

    
    return 0;
}