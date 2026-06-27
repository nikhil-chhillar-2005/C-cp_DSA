#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int>&a){
    int n=a.size();
    vector<vector<int>> ans;
    int subset_ct=1<<n;
    for(int mask=0;mask<subset_ct;mask++){
        vector<int>sub;
        for(int i=0;i<n;i++){
            if((mask&(1<<i))!=0){
                sub.push_back(a[i]);
            }
        }
        ans.push_back(sub);
    }
    // tc=O(n*2^n)
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto subsets=subset(v);
    for(auto it:subsets){
        for(auto a:it){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}