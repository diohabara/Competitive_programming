#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const int MAX_N = 1000;
int dp[MAX_N + 1][MAX_N + 1];
string x, y;
int q;

int solve(string x, string y)
{
    int n = x.size(), m = y.size();
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i] == y[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
    return 0;
}