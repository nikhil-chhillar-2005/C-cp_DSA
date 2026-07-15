// Well, unfortunately things didn't go so well for Alex's campers, and now there are N campers wandering around the city aimlessly. You have to handle Q queries; which consist of two groups finding each other and becoming one larger group. After each query, output the difference between the group of largest size and group of smallest size. If there is only one group, output 0. At first, everyone is in their own group.

// Also note, if the two campers in the query are already in the same group, print the current answer, and skip merging the groups together.

// Input:

// The first line consists of two space separated integers, N and Q

// The next Q line consists of two integers, A and B, meaning that the groups involving camper A and camper B find each other.

// Output:

// Output Q lines, the answer after each query.


#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
int Size[N];
multiset<int>Sizes;
void make(int v){
    parent[v]=v;
    Size[v]=1;
    Sizes.insert(1);
}

int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
}
void merge(int a,int b){
    Sizes.erase(Sizes.find(Size[a]));
    Sizes.erase(Sizes.find(Size[b]));

    Sizes.insert(Size[a]+Size[b]);
}
void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        if(Size[a]<Size[b]) swap(a,b);
        parent[b]=a;
        merge(a,b);
        Size[a]+=Size[b];
    }

}

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) make(i);
    while(k--){
        int u,v;
        cin>>u>>v;
        Union(u,v);
        if(Sizes.size()==1) cout<<0<<endl;
        else{
            int mn=*Sizes.begin();
            int mx=*(--Sizes.end());
            cout<<mx-mn<<endl;
        }
    }
}