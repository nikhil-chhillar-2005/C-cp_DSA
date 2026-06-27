#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.push_back(10);
    cout<<endl;
}
int  main(){
    // int n;
    // cout<<"Enter the size of vector: "; 
    // cin>>n;
    // vector<int>v(n5);
    // for(int i=0;i<n;i++){
    //     print(v);
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i=0;i<n;i++){
    //     v.pop_back();
    //     print(v);
    // }
    vector<int>v={1,2,3,4,5};
    print(v);
    vector<int>v1=v;
    v1.push_back(6);
    print(v);
    print(v1);
}