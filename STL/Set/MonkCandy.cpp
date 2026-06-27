// monk have n bags of candies.each bag have ai candies 1<i<=n. monk have k minute to eat .in each minute he will eat all candy of one bag and magicalt every time 1 new bag is add of half of eaten cany (rounded down). find the maximum number of candies monk can eat in k minute.
// 1<=t<=100
// 1<=n,k<=10^5
// 1<=ai<=10^10
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> pq;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            pq.insert(x);
        }
        long long ans=0;
        for(int i=0;i<k;i++){
            auto it=pq.end();
            it--;
            long long x=*it;
            ans+=x;
            pq.erase(it);
            pq.insert(x/2);
        }
      
        cout<<ans<<endl;
    }
}