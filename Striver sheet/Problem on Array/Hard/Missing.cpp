// Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
// Return the values A and B, as an array of size 2, where A appears in the 0-th index and B in the 1st index.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int>& nums) {
        int n = nums.size();

        int xr = 0;

        for (int i = 0; i < n; i++) {
            xr = xr ^ nums[i];
            xr = xr ^ (i + 1);
        }

        int number = (xr & ~(xr - 1));

        int zero = 0;
        int one = 0;

        for (int i = 0; i < n; i++) {
            if ((nums[i] & number) != 0) {
                one = one ^ nums[i];
            } else {
                zero = zero ^ nums[i];
            }
        }

        for (int i = 1; i <= n; i++) {
            if ((i & number) != 0) {
                one = one ^ i;
            } else {
                zero = zero ^ i;
            }
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == zero) {
                cnt++;
            }
        }

        if (cnt == 2) {
            return {zero, one};
        }

        return {one, zero};
    }
};

int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};

    Solution sol;

    vector<int> result = sol.findMissingRepeatingNumbers(nums);

    cout << "The repeating and missing numbers are: {" 
         << result[0] << ", " << result[1] << "}\n";

    return 0;
}