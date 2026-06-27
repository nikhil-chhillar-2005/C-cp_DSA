#include<bits/stdc++.h>
using namespace std;
void printBinary(int a){
        for(int i=10;i>=0;i--){
            cout<<((a>>i)&1);
        }
        cout<<endl;
}

int main(){
    printBinary(9);
    int a=9;
    int i=3;
    if(a&(1<<i)){
        cout<<"bit set\n";
    }else{
        cout<<"bit unset\n";
    }
    // set bit
    printBinary(a|(1<<1));
    // unset bit
    printBinary(a&~(1<<1));
    // toggle
    printBinary(a^(1<<1));
    printBinary(a^(1<<3));
    int count=0;
    for(int i=31;i>=0;--i){
        if(a&(1<<i)){
            count++;
        }
    }
    cout<<count;
    cout<<__builtin_popcount(a);

}