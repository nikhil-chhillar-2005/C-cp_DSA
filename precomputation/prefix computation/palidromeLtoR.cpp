// weather the substring can be palidrome or not by rearranging char in range l to r . you have given nq ranges tell for all of them
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int hsh[N][26];
int main(){
    int n;
    cin>>n;
    while(n--){
        int s,q;
        cin>>s>>q;
        string str;
        cin>>str;
        for(int i=0;i<s;i++){
            hsh[i+1][str[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=1;j<=s;j++){
                hsh[j][i]+=hsh[j-1][i];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int odd=0;
            for(int i=0;i<26;i++){
                int cnt=hsh[r][i]-hsh[l-1][i];
                if(cnt%2)odd++;
            }
            if(odd>1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}