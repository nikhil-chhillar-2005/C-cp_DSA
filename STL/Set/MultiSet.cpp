#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string> s;
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
    // s.erase("abc");//O(log(n)) it deletes all occurrences of "abc"
    for(auto i:s){
        cout<<i<<" ";
    }
}