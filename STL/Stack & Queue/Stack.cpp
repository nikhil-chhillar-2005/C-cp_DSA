#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl; // 3
    s.pop();
    cout<<s.top()<<endl; // 2
    cout<<s.size()<<endl; // 2
    cout<<s.empty()<<endl; // 0 (false)
    s.pop();
    s.pop();
    cout<<s.empty()<<endl; // 1 (true)
}