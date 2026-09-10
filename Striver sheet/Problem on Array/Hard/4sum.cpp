// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 3; i++) {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            for(int j = i + 1; j < n - 2; j++) {
                if(j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int k = j + 1;
                int l = n - 1;

                while(k < l) {
                    long long total = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(total == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});

                        k++;
                        l--;

                        while(k < l && nums[k] == nums[k - 1])
                            k++;

                        while(k < l && nums[l] == nums[l + 1])
                            l--;

                    } else if(total < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }

        return ans;
    }
};
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution obj;
    vector<vector<int>> ans = obj.fourSum(nums, target);
    for(auto it : ans) {
        for(auto i : it) {
            cout << i << " ";
        }
        cout << endl;
    }
}