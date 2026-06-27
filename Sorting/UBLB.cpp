#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int lb,ub;
    cin>>lb>>ub;
    auto it1=lower_bound(v.begin(),v.end(),lb);
    auto it2=upper_bound(v.begin(),v.end(),ub);
    cout<<endl;
    cout<<"Lower bound of "<<lb<<" is "<<*it1<<endl;
    cout<<"Upper bound of "<<ub<<" is "<<*it2<<endl;
}