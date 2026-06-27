// you have to find maximum minimum distance between the cows 
// the cows are placed in the stalls and the distance between the cows should be at least d
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,c;
long long stall[N];
bool isDistancePossible(long long d){
    int lastpos=-1,cow_count=c;
    for(int i=0;i<n;i++){
        if(stall[i]-lastpos>=d||lastpos==-1){
            cow_count--;
            lastpos=stall[i];
        }
        if(cow_count==0) break;
    }
    return cow_count==0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>stall[i];
        }
        sort(stall,stall+n);
        int low=0,high=1e9+10;
        while(high-low>1){
            int mid=(low+high)/2;
            if(isDistancePossible(mid)){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        // TC=log(10^9)*N
        if(isDistancePossible(high)){
            cout<<high<<endl;
        }
        else{
            cout<<low<<endl;
        }
    }
    
}