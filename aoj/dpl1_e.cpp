#include <algorithm>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const int MAX_N = 1000;
int dp[MAX_N + 1][MAX_N + 1];

int solve(string s, string t)
{
    int n = s.size(), m = t.size();
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= m; j++) {
        dp[0][j] = j;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cost = (s[i] == t[j] ? 0 : 1);
            // dp[i][j+1]+1のとき，tに文字を挿入する
            // dp[i+1][j]+1のとき，sの文字を削除する
            // dp[i][j]+costのとき，文字を置換する(同じ時は置換しない)
            dp[i + 1][j + 1] = min(min(dp[i][j + 1] + 1, dp[i + 1][j] + 1), dp[i][j] + cost);
        }
    }
    return dp[n][m];
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s1, s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2) << endl;
    return 0;
}