#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;

// dp[サイコロを振った個数][2の指数][3の指数][5の指数] = そうなる確率
long double dp[2][201][101][101];
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // input
    ll n, d;
    // n: サイコロを振る回数
    // d: 出た目の積
    int cur = 0, next = 1;
    cin >> n >> d;

    dp[0][0][0][0] = 1;
    for (int i = 0; i < n; i++) {
        memset(dp[next], 0, sizeof(dp[next]));
        for (int j = 0; j <= 2 * i; j++) {      // 2の指数
            for (int k = 0; k <= i; k++) {      // 3の指数
                for (int l = 0; l <= i; l++) {  // 5の指数
                    if (dp[cur][j][k][l]) {
                        dp[next][j][k][l] += dp[cur][j][k][l];          // 1
                        dp[next][j + 1][k][l] += dp[cur][j][k][l];      // 2
                        dp[next][j][k + 1][l] += dp[cur][j][k][l];      // 3
                        dp[next][j + 2][k][l] += dp[cur][j][k][l];      // 4
                        dp[next][j][k][l + 1] += dp[cur][j][k][l];      // 5
                        dp[next][j + 1][k + 1][l] += dp[cur][j][k][l];  // 6
                    }
                }
            }
        }
        swap(cur, next);
    }

    long double ans = 0;
    int two = 0, three = 0, five = 0;
    while (d % 2 == 0) {
        two++, d /= 2;
    }
    while (d % 3 == 0) {
        three++, d /= 3;
    }
    while (d % 5 == 0) {
        five++, d /= 5;
    }

    for (int i = two; i <= 200; i++) {
        for (int j = three; j <= 100; j++) {
            for (int k = five; k <= 100; k++) {
                ans += dp[cur][i][j][k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        ans /= 6.0;
    }
    printf("%.9f\n", (double)ans * (d == 1));
}