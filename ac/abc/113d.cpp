#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<int>> dp(H + 1, vector<int>(W));
    dp[0][0] = 1; // 初期状態
    rep(row, H)
    {
        rep(column, W)
        {
            for (int bit1 = 0; bit1 < 1 << (W - 1); ++bit1) {
                // 2 つの横線がつながっていないか調べる
                // bit1は選ぶ横棒の位置
                // bit2は選べる横棒の位置のうち,隣合うbitの列
                // それぞれW-1の横棒の入れる場所,それぞれ入れるか入れないかで2^{W-1}の選び方がある
                bool isSeqential = false; // 隣合う横棒があるかどうか
                for (int bit2 = 0; bit2 < W - 2; ++bit2) {
                    // 立ったbitが隣り合っているならfalse
                    if ((bit1 & (1 << bit2)) && (bit1 & (1 << (bit2 + 1)))) {
                        isSeqential = true;
                    }
                }
                if (!isSeqential) {
                    if (column >= 1 && (bit1 & (1 << (column - 1)))) {
                        // 左方向に横線をたどるケース
                        dp[row + 1][column - 1] += dp[row][column];
                        dp[row + 1][column - 1] %= MOD;
                    } else if (column <= W - 2 && (bit1 & (1 << column))) {
                        // 右方向に横線をたどるケース
                        dp[row + 1][column + 1] += dp[row][column];
                        dp[row + 1][column + 1] %= MOD;
                    } else {
                        // 横線をたどらないケース
                        dp[row + 1][column] += dp[row][column];
                        dp[row + 1][column] %= MOD;
                    }
                }
            }
        }
    }
    cout << dp[H][K - 1] << endl;
    return 0;
}
