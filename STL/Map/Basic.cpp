#include<bits/stdc++.h>
using namespace std;
void print(map<string,int> &m){
    cout<<"size: "<<m.size()<<endl;
    for( auto &x:m){//O(n*log(n))
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    map<string,int> m;
    m["abc"]=1;//O(s.size*log(n))
    m["ghi"]=3;
     m["def"]=2;
    m.insert({"xyz",4});
    auto it=m.find("def");//O(log(n))
    if(it!=m.end()){
        cout<<"found "<<it->first<<" "<<it->second<<endl;
    }
    print(m);
    m.erase("abc");//O(log(n))
    print(m);
    m.erase(m.find("def"));
    print(m);
    m.clear();
    print(m);
}