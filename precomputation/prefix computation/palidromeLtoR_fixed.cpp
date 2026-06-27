// weather the substring can be palidrome or not by rearranging char in range l to r
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, q;
        cin >> s >> q;

        string str;
        cin >> str;

        // prefix[i][c] = count of char c in str[0..i-1]
        vector<array<int, 26>> prefix(s + 1);
        for (int c = 0; c < 26; c++) prefix[0][c] = 0;

        for (int i = 0; i < s; i++) {
            prefix[i + 1] = prefix[i];
            prefix[i + 1][str[i] - 'a']++;
        }

        while (q--) {
            int l, r; // expected 1-indexed inclusive
            cin >> l >> r;

            int odd = 0;
            for (int c = 0; c < 26; c++) {
                int cnt = prefix[r][c] - prefix[l - 1][c];
                if (cnt % 2) odd++;
            }

            cout << (odd > 1 ? "NO\n" : "YES\n");
        }
    }
    return 0;
}

