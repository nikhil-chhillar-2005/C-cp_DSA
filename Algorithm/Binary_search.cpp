// binary search is used on monotonic function to find any point
// monotonic function is a function which is either increasing or decreasing
// we can use binary search to find the point where the function changes from increasing to decreasing or vice versa
#include <bits/stdc++.h>
using namespace std;
int binary_search(int low,int high,int target,vector<int>& v){
    while(high-low>1){
        int mid=(low+high)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]<target){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    if(v[low]==target){
        return low;
    }else if(v[high]==target){
        return high;
    }
    return -1; // target not found
}
int main(){
    int low=0,high=100,target=42;
    vector<int> v(101);
    for(int i=0;i<=100;i++){
        v[i]=i;
    }
    int result=binary_search(low,high,target,v);
    if(result==-1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at index: "<<result<<endl;
    }
    return 0;
}
