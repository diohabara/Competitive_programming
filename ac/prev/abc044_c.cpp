#include <bits/stdc++.h>
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll MAX_N = 55;
const ll MAX_SUM = 2555;
ll dp[MAX_N][MAX_N][MAX_SUM]; // dp[i][j][k]:i番目までからj枚を選んでkにする選び方の総数

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, a;
    cin >> n >> a;
    vector<ll> x(n);
    rep(i, n)
    {
        cin >> x[i];
    }

    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1;
    rep(i, n)
    {
        rep(j, n)
        {
            rep(k, MAX_SUM)
            {
                if (dp[i][j][k]) {
                    dp[i + 1][j][k] += dp[i][j][k];
                    dp[i + 1][j + 1][k + x[i]] += dp[i][j][k];
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += dp[n][i][i * a];
    }
    cout << ans << endl;
    return 0;
}