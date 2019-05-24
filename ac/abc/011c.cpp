#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
// dp[値]: その値までに必要な引く回数
int INF = 100000;
int n;
int ng[3];
int dp[305];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    // input
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> ng[i];
    }

    // dpを初期化
    for (int i = 0; i < n; i++) {
        dp[i] = INF;
    }
    dp[n] = 0;

    for (int i = n; i != 0; i--) {
        // iがngのとき，スキップ
        if (i == ng[0] || i == ng[1] || i == ng[2]) {
            continue;
        }
        // i - jに行くのに必要な引き算を求める
        for (int j = 1; j < 4; j++) {
            dp[i - j] = min(dp[i - j], dp[i] + 1);
        }
    }

    if (dp[0] <= 100) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}