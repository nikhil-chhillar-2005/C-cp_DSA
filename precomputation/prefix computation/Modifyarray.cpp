// you have given integer of n size with all value 0 then you have given q queries of type l r x then you have to add x in all element from index l to r of array and print the final array after all queries then print max element
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int prefix[N];
int main(){
    int n;
    cin>>n;
    int q;
    cin>>q;
    while(q--){
        int l,r,x;
        cin>>l>>r>>x;
        prefix[l]+=x;
        prefix[r+1]-=x;
    }
    int maxi=0;
    for(int i=1;i<=n;i++){
        prefix[i]+=prefix[i-1];
        maxi=max(maxi,prefix[i]);
        
    }
    cout<<maxi<<endl;
}