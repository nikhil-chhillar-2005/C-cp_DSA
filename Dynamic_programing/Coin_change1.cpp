// https://leetcode.com/problems/coin-change/description/
#include <bits/stdc++.h>
using namespace std;

int dp[10010];
int func(int amount, vector<int> &a)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    for (int x : a)
    {
        if (amount - x >= 0)
        {
            ans = min(ans + 0LL, func(amount - x, a) + 1LL);
        }
    }
    return dp[amount] = ans;
}
int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    int n, amount;
    cin >> n >> amount;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << coinChange(a, amount);
}