// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int mxprofit=0;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            mxprofit=max(mxprofit,prices[i]-minprice);
        }
        return mxprofit;
    }
};
int main(){
    Solution s;
    vector<int> prices={7,1,5,3,6,4};
    cout<<s.maxProfit(prices);
    return 0;
}