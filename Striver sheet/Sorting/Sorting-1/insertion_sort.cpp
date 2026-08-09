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
        for(int i=1;i<n;i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
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