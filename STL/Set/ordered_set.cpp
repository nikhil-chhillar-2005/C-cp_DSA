#include<bits/stdc++.h>
using namespace std;
void print(set<string> s){
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    set<string> s;
    s.insert("abc");//O(log(n))
    s.insert("def");
    s.insert("ghi");
    s.insert("abc");
    auto it=s.find("def");//O(log(n))
    if(it!=s.end()){
        cout<<"Found "<<*it<<endl;
        s.erase(it);//O(log(n))
    }
    else{
        cout<<"Not Found"<<endl;
    }
    print(s);
}