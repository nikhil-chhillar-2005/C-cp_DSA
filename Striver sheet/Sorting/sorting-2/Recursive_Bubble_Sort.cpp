#include<bits/stdc++.h>
using namespace std;

void sortt(int n,int a[]){
    if(n==0) return;
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            d=1;
        }
    }
    if(d==0) return;
    sortt(n-1,a);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortt(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}