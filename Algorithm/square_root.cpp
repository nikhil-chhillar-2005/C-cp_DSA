#include<bits/stdc++.h>
using namespace std;
double eps=1e-6;
double sqrt(double n){
    double low=0,high=n;
    while(high-low>eps){
        double mid=(low+high)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}