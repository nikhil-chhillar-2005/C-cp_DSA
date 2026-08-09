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
            int min=i;
            for(int j=i;j<n;j++){
                if(arr[min]>arr[j]){
                    min=j;
                }
            }
            if(min!=i){
                swap(arr[i],arr[min]);
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