#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;
#define maxN 100
#define maxP 10000
bool dp[maxN + 1][maxP + 1];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // input
    int n, cnt = 0;
    int p[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // dp[i][j]: i問目までの問題を使ってj点の合計点ができるかどうかの真理値
    memset(dp, 0, sizeof(dp));
    dp[0][0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < maxP; j++) {
            dp[i + 1][j] |= dp[i][j];
            if (j >= p[i]) {
                dp[i + 1][j] |= dp[i][j - p[i]];
            }
        }
    }

    for (int j = 0; j <= maxP; j++) {
        if (dp[n][j]) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}