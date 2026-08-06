// count freq of array element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    for(auto [val,f]:freq){
        cout<<val<<": "<<f<<endl;
    }
}