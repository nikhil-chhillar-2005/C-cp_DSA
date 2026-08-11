#include<bits/stdc++.h>
using namespace std;

void sortt(int a[],int i,int n){
    if(i==n) return;
    int j=i-1;
    int key=a[i];
    while(j>=0&&a[j]>key){
        a[j+1]=a[j];
        j--;
    }
    a[++j]=key;
    sortt(a,i+1,n);
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sortt(arr,0,a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}