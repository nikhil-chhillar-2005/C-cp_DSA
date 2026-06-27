#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // if we use cin>>s; then it will take input only until the first space is encountered. To take input with spaces, we can use getline() function.
    int t;
    cin>>t;
    cin.ignore(); // to ignore the newline character left in the input buffer after reading t
    while(t--){
    getline(cin, s);
    cout<<s<<endl;
    s.push_back('h');
    s.push_back('i');
    cout<<s<<endl;
    }
}