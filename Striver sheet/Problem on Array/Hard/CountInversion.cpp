// Given an array of N integers, count the inversion of the array (using merge-sort).

// Inversion of an array: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].
#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int left,int mid,int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j] = arr[mid+1+j];
    }

    int i=0,j=0,k=left;
    int cnt = 0;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
            cnt += (n1-i);
        }
    }

    while(i<n1){
        arr[k++] = L[i++];
    }
    while(j<n2){
        arr[k++] = R[j++];
    }

    return cnt;
}
void mergesort(int arr[],int left,int right,int &cnt){
    if(left<right){
        int mid = left + (right-left)/2;
        mergesort(arr,left,mid,cnt);
        mergesort(arr,mid+1,right,cnt);
        cnt += merge(arr,left,mid,right);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt = 0;
    mergesort(arr,0,n-1,cnt);
    cout<<cnt<<endl;
}