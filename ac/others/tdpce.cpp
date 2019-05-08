#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const int MOD = 1e9 + 7;
int D;
string N;
// dp[pos][sum][sml]
// pos:pos桁目まで見たときの
// sum:sum=(各桁の和 mod D)
// sml:パスに制限があるかどうかsml->ある・sml=1->ない
int dp[10001][101][2];

int solve()
{
    const int len = N.size();
    dp[0][0][0] = 1;

    for (int pos = 0; pos < len; pos++) {
        for (int sum = 0; sum < D; sum++) {
            for (int sml = 0; sml <= 1; sml++) {
                if (!dp[pos][sum][sml]) {
                    //ここまでのパスが存在しない場合
                    continue;
                }
                if (sml == 1) {
                    // 次へのパスに制限がない場合
                    int lim = 10;
                    for (int d = 0; d < lim; d++) {
                        (dp[pos + 1][(sum + d) % D][1] += dp[pos][sum][1]) %= MOD;
                    }
                } else {
                    // 次へのパスに制限がある場合
                    int lim = static_cast<int>(N[pos] - '0');
                    for (int d = 0; d < lim; d++) {
                        (dp[pos + 1][(sum + d) % D][1] += dp[pos][sum][0]) %= MOD;
                    }
                    (dp[pos + 1][(sum + lim) % D][0] += dp[pos][sum][0]) %= MOD;
                }
            }
        }
    }

    // Dの倍数でパス制限のある場合とない場合の和が答え
    int res = (dp[len][0][0] + dp[len][0][1]) % MOD;
    return (res + MOD - 1) % MOD;
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> D >> N;
    cout << solve() << endl;
    return 0;
}