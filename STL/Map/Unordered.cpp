// keys datatype
// inbuilt implementation of unordered map in c++ stl
// time complexity of all operations is O(1) on average and O(n) in worst case
// we can not make unordered map of user defined data type as key because it uses hash function to store the data and we can not define hash function for user defined data type
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<string,int> &m){
    cout<<"size: "<<m.size()<<endl;
    for( auto &x:m){//O(n)
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    unordered_map<string,int> m;
    m["abc"]=1;//O(s.size)
    m["ghi"]=3;
     m["def"]=2;
    m.insert({"xyz",4});
    auto it=m.find("def");//O(1) on average and O(n) in worst case
    if(it!=m.end()){
        cout<<"found "<<it->first<<" "<<it->second<<endl;
    }
    print(m);
    m.erase("abc");//O(1) on average and O(n) in worst case
    print(m);
    m.erase(m.find("def"));
    print(m);
    m.clear();
    print(m);
}