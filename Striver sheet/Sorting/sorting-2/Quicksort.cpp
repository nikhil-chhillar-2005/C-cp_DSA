#include<bits/stdc++.h>
using namespace std;

int partition(int s,int l,int a[]){
    int ab=a[s];
    int i=s;
    s++;
    while(s<=l){
        while(s<=l&&a[s]<ab){
            s++;
        }
        while(l>=s&&a[l]>ab){
            l--;
        }
       if (s <= l) {
    swap(a[l], a[s]);
    l--;
    s++;
}
    }
    swap(a[i],a[l]);
    return l;
}

void quicksort(int a[],int s,int l){
    if(s<=l){
        int mid=partition(s,l,a);
        quicksort(a,s,mid-1);
        quicksort(a,mid+1,l);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}