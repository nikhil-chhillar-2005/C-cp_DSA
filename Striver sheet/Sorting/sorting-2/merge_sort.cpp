#include<bits/stdc++.h>
using namespace std;
void mrg(vector<int>& a, int s, int mid, int e) {
    vector<int> temp;

    int i = s, j = mid + 1;

    while(i <= mid && j <= e) {
        if(a[i] < a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }

    while(i <= mid)
        temp.push_back(a[i++]);

    while(j <= e)
        temp.push_back(a[j++]);

    for(int i = s; i <= e; i++)
        a[i] = temp[i - s];
}

void mrgsort(vector<int> &a,int s,int e){
    if((e-s)>0){
        int mid=(s+e)/2;
        mrgsort(a,0,mid);
        mrgsort(a,mid+1,e);
        mrg(a,s,mid,e);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mrgsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}