#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (currSum == 0)
                start = i;

            currSum += nums[i];

            if (currSum > maxSum) {
                maxSum = currSum;
                ansStart = start;
                ansEnd = i;
            }

            if (currSum < 0)
                currSum = 0;
        }

        vector<int> ans;

        for (int i = ansStart; i <= ansEnd; i++)
            ans.push_back(nums[i]);

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    vector<int> ans = s.maxSubArray(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}