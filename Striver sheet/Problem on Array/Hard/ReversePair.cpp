// Given an integer array nums, return the number of reverse pairs in the array.

// A reverse pair is a pair (i, j) where:

// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].
#include<bits/stdc++.h>
using namespace std;
class Solution {
private:

    int merge(vector<int>& nums, int l, int mid, int r) {

        int cnt = 0;

        int j = mid + 1;

        for (int i = l; i <= mid; i++) {
            while (j <= r &&
                   (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

            cnt += j - (mid + 1);
        }

        vector<int> temp;

        int i = l;
        j = mid + 1;

        while (i <= mid && j <= r) {

            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            }
            else {
                temp.push_back(nums[j++]);
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i++]);
        }

        while (j <= r) {
            temp.push_back(nums[j++]);
        }

        for (int k = l; k <= r; k++) {
            nums[k] = temp[k - l];
        }

        return cnt;
    }

    int mergesort(vector<int>& nums, int l, int r) {

        if (l >= r)
            return 0;

        int mid = l + (r - l) / 2;

        int cnt = 0;

        cnt += mergesort(nums, l, mid);
        cnt += mergesort(nums, mid + 1, r);

        cnt += merge(nums, l, mid, r);

        return cnt;
    }

public:

    int reversePairs(vector<int>& nums) {

        int n = nums.size();

        return mergesort(nums, 0, n - 1);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int result = solution.reversePairs(nums);
    cout << result << endl;

    return 0;
}