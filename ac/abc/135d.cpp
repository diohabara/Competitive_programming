#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
ll n;
ll dp[100005][13]; // 先頭i文字として考えられるもののうち,13で割った余りがjであるものの数

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // input
    string s;
    cin >> s;
    // output
    n = s.size();
    ll res = 0;
    dp[0][0] = 1;
    // sの文字目に関して
    rep(i, n)
    {
        int c;
        if (s[i] == '?') {
            c = -1;
        } else {
            c = s[i] - '0';
        }
        rep(j, 10) {
            // s[i]が-1でないかつs[i]がjでないとき
            if (c != -1 && c != j) {
                continue;
            }
            // 次の文字に関して
            rep(k, 13) {
                dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
            }
        }
        // MODを取る
        rep(j, 13) {
            dp[i + 1][j] %= MOD;
        }
    }
    // あまりが5となる,最後の文字の位置が答え
    res = dp[n][5];

    cout << res << endl;
    return 0;
}