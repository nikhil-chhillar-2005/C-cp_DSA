#include<bits/stdc++.h>
using namespace std;
class Array{
    private:
    vector<int> arr;
    int n;
    public:
        Array(){
            cout<<"Enter size of array";
            cin>>n;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                arr.push_back(x);
            }
    }
    void sort(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
    void show(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Array a=Array();
    a.sort();
    a.show();
}