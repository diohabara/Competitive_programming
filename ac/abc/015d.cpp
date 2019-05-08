#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
int W, N, K;
// dp[幅の合計][貼った枚数の合計][k番目まで調べた]
const int maxW = 10000, maxNum = 55;
int dp[maxW + 1][maxNum + 1][maxNum + 1];
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> W >> N >> K;
    vector<int> a(N);
    vector<int> b(N);
    memset(dp, -1, sizeof(dp));
    rep(i, N)
    {
        cin >> a[i] >> b[i];
    }
    dp[0][0][0] = 0;
    for (int w = 0; w <= W; w++) { // 幅の合計
        for (int i = 0; i <= K; i++) { // 貼った枚数の合計
            for (int k = 0; k <= N; k++) { // 調べた枚数の合計
                if (i == K) { // もう貼れないとき
                    // 調べた回数が少ないものと多いもので最大のものとなる
                    dp[w][i][k + 1] = max(dp[w][i][k + 1], dp[w][i][k]);
                } else {
                    if (w + a[k] <= W) {
                        // 幅に余裕がある時
                        // 貼る時と貼らないときの最大値を取る
                        dp[w + a[k]][i + 1][k + 1] = max(dp[w + a[k]][i + 1][k + 1], dp[w][i][k] + b[k]);
                        // 貼らないとき
                        dp[w][i][k + 1] = max(dp[w][i][k + 1], dp[w][i][k]);
                    } else {
                        // 幅が足りない時
                        dp[w][i][k + 1] = max(dp[w][i][k + 1], dp[w][i][k]);
                    }
                }
            }
        }
    }

    int res = 0;
    for (int w = 0; w < maxW; w++) {
        for (int i = 0; i < maxNum; i++) {
            res = max(res, dp[w][i][N]);
        }
    }
    cout << res << endl;
    return 0;
}