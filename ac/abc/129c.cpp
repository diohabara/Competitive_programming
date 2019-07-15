#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    // 通れる階段
    vector<int> oks(N + 1, true);
    rep(i, M)
    {
        int a;
        cin >> a;
        oks[a] = false;
    }

    vector<ll> dp(N + 1, 0);
    dp[0] = 1;
    if (oks[1]) {
        dp[1] = 1;
    }
    for (int n = 2; n <= N; ++n) {
        if (oks[n - 1]) {
            dp[n] += dp[n - 1];
        }
        if (oks[n - 2]) {
            dp[n] += dp[n - 2];
        }
        dp[n] %= MOD;
    }
    cout << dp[N] << endl;
    return 0;
}