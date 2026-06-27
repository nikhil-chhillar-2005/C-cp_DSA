#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>> &v){
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int>>v={{1,2},{3,4},{5,6}};
    print(v);
    vector<pair<int,int>>v1;
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    print(v1);
}
