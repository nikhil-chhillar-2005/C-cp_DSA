// find digit sum by recursion
#include<bits/stdc++.h>
using namespace std;
// digit_sum(n)=n%10+digit_sum(n/10)
int digit_sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+digit_sum(n/10);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Digit sum of "<<n<<" is "<<digit_sum(n)<<endl;
    return 0;
}