// count occurance of element in array by hahing,size of array is 10^6 and element is in range of 10^5
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int freq[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<freq[x]<<endl;
    }
}
