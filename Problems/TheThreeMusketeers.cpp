// Our Monk visits a neighbourhood school to teach kids, once a week. This week, they are studying the famous novel "The Three Musketeers" by Alexandre Dumas. As Monk is a fun teacher, he wants to enact a scene from the novel and hence, must choose 3 children from the class as the musketeers.
// There are N children in his class. Monk is given the list of names of the students. Help Monk find the number of ways in which he can choose the musketeers, such that the names of the three children have atleast a vowel in common i.e. the names must have atleast one of ('a', 'e', 'i', 'o', 'u') in common. Two ways are considered different only if atleast one of the chosen student is different.

// Input:
// The first line consists of integer T. T testcases follow. The first line of each testcase consists of an integer N, denoting the number of children. It is followed by N lines, wherein each line is a string having only lowercase alphabets ('a'-'z') without spaces, denoting the names of children. A name can have a maximum length of 15 characters.

// Output:
// For each testcase, print the answer in a single line.

#include<bits/stdc++.h>
using namespace std;

bool isvowel(char a){
    return (a=='a'||a=='i'||a=='e'||a=='o'||a=='u');
}

vector<string> find_subset(string s){
    vector<string> ans;
    int sz=(1<<s.size());
    for(int mask=0;mask<sz;mask++){
        string subset;
        for(int bit=0;bit<s.size();bit++){
            if(mask&(1<<bit)){
                subset.push_back(s[bit]);
            }
        }
        if(subset.size()) ans.push_back(subset);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        unordered_map<string,int> hsh;
        for(int i=0;i<n;i++){
            string s=str[i];
            int size=s.size();
            set <char>d_vow;
            for(int j=0;j<size;j++){
                if(isvowel(s[j])){
                    d_vow.insert(s[j]);
                }
            }
            string vow;
            for(auto a:d_vow) vow.push_back(a);
            vector <string> all_subset=  find_subset(vow);
            for(auto v_subset:all_subset){
                hsh[v_subset]++;
            }
        }
        // for(auto pr:hsh){
        //     cout<<pr.first<<pr.second<<endl;
        // }
        // cout<<endl;
        long long ans=0;
        for(auto pr:hsh){
            if(pr.second<3) continue;
            long long ct=pr.second;
            long long ways=ct*(ct-1)*(ct-2)/6;
            // cout<<ways<<" ";
            if(pr.first.size()&1){
                ans+=ways;
            }else{
                ans-=ways;
            }
        }
        cout<<"\n"<<ans;
    }
}