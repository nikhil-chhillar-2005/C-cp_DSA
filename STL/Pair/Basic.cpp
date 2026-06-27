#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    // p=make_pair(1,"Hello");
    p={1,"Hello"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>p1=p;
    p1.first=2;
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,string> &p2=p;
    p2.first=3;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
}