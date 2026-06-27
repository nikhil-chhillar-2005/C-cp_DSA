//  You are given an integer C such that the XOR of two integers (A, B) is C. In short, A ⊕ B = C (⊕ denotes the bitwise XOR operation).

// Out of all possible pairs of A and B, you must find two integers such that their product is maximum.

// Let us define L(A) as the length of A in its binary representation. Then,
// L(A) ≤ L(C) and L(B) ≤ L(C).

// Input Format

// A single integer representing C (0 ≤ C ≤ 10^5).

// Output Format

// Print the maximum product you can achieve under the given condition.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    int bitcnt=(int)log2(c)+1;
    int a=0,b=0;
    vector<int>setbits;
    for(int i=0;i<bitcnt;i++){
        if(c&(1<<i)){
            setbits.push_back(i);
        }else{
            a|=(1<<i);
            b|=(1<<i);
        }
    }
    long long ans=-1;
    int sz=(1<<setbits.size());
    for(int mask=0;mask<sz;mask++){
        int acpy=a,bcpy=b;
        for(int j=0;j<setbits.size();j++){
            if(mask&(1<<j)){
                acpy|=(1<<setbits[j]);
            }else{
                bcpy|=(1<<setbits[j]);
            }
        }
        ans=max(ans,acpy*1LL*bcpy);
    }
    cout<<ans;
}