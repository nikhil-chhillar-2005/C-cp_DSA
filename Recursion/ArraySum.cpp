#include<bits/stdc++.h>
using namespace std;
// sum of array till n index=sum(n,arr)
// sum(n,a)=a[n]+sum(n-1,a)
int sum(int n,int arr[]){
    if(n==0){
        return arr[0];
    }
    return arr[n]+sum(n-1,arr);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of array is "<<sum(n-1,arr)<<endl;
    return 0;
}