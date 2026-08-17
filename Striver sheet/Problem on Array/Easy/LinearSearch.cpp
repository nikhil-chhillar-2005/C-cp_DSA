#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int Linearsearch(vector<int> a,int key){
        int ans=-1;
        for(int i=0;i<a.size();i++){
            if(a[i]==key){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int key;
    cin>>key;
    solution s;
    cout<<s.Linearsearch(a,key)<<endl;
}