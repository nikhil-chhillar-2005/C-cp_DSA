// in an array ever element has even count expect 1 give that 1 element in O(1)space and O(n)time
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    a=a^b;
    b=b^a;
    a=a^b;
}
int main(){
    int a=10,b=20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int ans=0;
    for(int i=0;i<9;i++){
        int c;
        cin>>c;
        ans^=c;
    }
    cout<<ans<<endl;
}