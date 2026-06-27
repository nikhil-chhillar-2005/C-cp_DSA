#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;
    s.insert("abc");//O(1) average case, O(n) worst case
    s.insert("def");
    s.insert("ghi");
    s.insert("abc");
    auto it=s.find("def");//O(1) average case, O(n) worst case
    if(it!=s.end()){
        cout<<"Found "<<*it<<endl;
        s.erase(it);//O(1) average case, O(n) worst case
    }
    else{
        cout<<"Not Found"<<endl;
    }
    for(auto i:s){
        cout<<i<<" ";
    }
}