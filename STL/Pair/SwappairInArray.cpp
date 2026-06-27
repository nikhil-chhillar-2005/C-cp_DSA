#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p[3];
    for(int i=0;i<3;i++){
        cin>>p[i].first>>p[i].second;
    }
    swap(p[0],p[2]);
    for(int i=0;i<3;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}