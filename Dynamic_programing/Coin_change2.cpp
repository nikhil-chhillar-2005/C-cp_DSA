// https://leetcode.com/problems/coin-change-ii/description/
#include <bits/stdc++.h>
using namespace std;

int dp[310][10010];
int func(int ind, int amount, vector<int> &a)
{
    if (amount == 0)
        return 1;
    if (ind < 0)
        return 0;
    if (dp[ind][amount] != -1)
        return dp[ind][amount];
    int ways = 0;
    for (int coin_amount = 0; coin_amount <= amount; coin_amount += a[ind])
    {
        ways += func(ind - 1, amount - coin_amount, a);
    }
    return dp[ind][amount] = ways;
}
int change(int amount, vector<int> &coins)
{
    memset(dp, -1, sizeof(dp));
    return func(coins.size() - 1, amount, coins);
}

int main()
{
    int n, amount;
    cin >> n >> amount;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << change(amount, a);
}