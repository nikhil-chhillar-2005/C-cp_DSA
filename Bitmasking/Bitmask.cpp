// Consider this problem: There are N≤5000
//  workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30]
// , representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> masks(n,0);
    for(int i=0;i<n;i++){
        int num_wrokday;
        cin>>num_wrokday;
        int mask=0;
        for(int j=0;j<num_wrokday;j++){
            int day;
            cin>>day;
            mask=(mask|(1<<day));
        }
        masks[i]=mask;
    }
    int maxd=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int intersection=masks[i]&masks[j];
            int commondays=__builtin_popcount(intersection);
            maxd=max(maxd,commondays);
            // cout<<i<<" "<<j<<" "<<commondays;
        }
    }
    cout<<maxd;
}