#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
#define MAX 1400

int dp[MAX][MAX], G[MAX][MAX]; // dp:動的計画法に使う2次元配列，G:入力に使う2次元配列

int getLargestSquare(int H, int W) {
    int maxWidth = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            dp[i][j] = (G[i][j] + 1) % 2; // dp[i][j]:G[i][j]が奇数なら0(=false)，偶数なら1(=true)
            maxWidth |= dp[i][j]; // maxWidth = maxWidth ∧ dp[i][j]
        }
    }

    for (int i = 1; i < H; i++) {
        for (int j = 1; j < W; j++) {
            if (G[i][j]) { // G[i][j]がfalse(=汚れている)とき
                dp[i][j] = 0; // dp[i][j]はfalse
            } else { // G[i][j]がtrue(=汚れていない)とき
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1; // 上，左，左上のタイルが作れる正方形より1だけ大きい正方形が作れる
                maxWidth = max(maxWidth, dp[i][j]);
            }
        }
    }

    return maxWidth * maxWidth;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W;
    scanf("%d %d", &H, &W);

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%d", &G[i][j]);
        }
    }

    printf("%d\n", getLargestSquare(H, W));
    return 0;
}