#include<bits/stdc++.h>
using namespace std;

int lower_bound( vector<int>&v,int element){
    int low=0,high=v.size();
    while(high-low>1){
        int mid=(low+high)/2;
        if(v[mid]<element){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(v[low]>=element){
        return low;
    }
    else if(v[high]>=element){
        return high;
    }else{
        return -1; // element not found
    }
}

int upper_bound( vector<int>&v,int element){
    int low=0,high=v.size();
    while(high-low>1){
        int mid=(low+high)/2;
        if(v[mid]<=element){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(v[low]>element){
        return low;
    }
    else if(v[high]>element){
        return high;
    }else{
        return -1; // element not found
    }
    
    cout<<"Enter the element to find upper bound: ";
    cin>>element;
    upper_bound(v,element);
    cout<<"Upper bound of "<<element<<" is at index: "<<upper_bound(v,element)<<endl;
}

int main(){
    int n,element;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter the element to find lower bound: ";
    cin>>element;
    int result=lower_bound(v,element);
    if(result==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Lower bound of "<<element<<" is at index: "<<result<<endl;
    }
    return 0;
}