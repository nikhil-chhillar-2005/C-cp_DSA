#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<(n&(1<<i));
    }
}
// odd or even
void ODD(int a){
    cout<<((a&1)?"odd\n":"Even\n");
}
// avoid division by 2
void DIVIDE2(int a){
    cout<<(a>>1)<<endl;;
}
// multiply by 2
void MUL2(int a ){
    cout<<(a<<1)<<endl;
}
// conversion of upper to lower letter
void UL(char a){
    cout<<char(a|' ')<<endl;
}
// conversion of lower to upper letter
void LU(char a){
    cout<<char(a&'_')<<endl;
}


int main(){
    int a=10;
    cout<<a<<" ";
    ODD(a);
    DIVIDE2(a);
    MUL2(a);
    char b='E';
    UL(b);
    b='e';
    LU(b);

}