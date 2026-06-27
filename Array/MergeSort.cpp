#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N];
void merge(int l,int mid,int r){
    int i=l,j=mid+1,k=0;
    int temp[r-l+1];
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
        }

    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
    
}
void merge_sort(int l,int r){
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    merge(l,mid,r);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(0,n-1);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}