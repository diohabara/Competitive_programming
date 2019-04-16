#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
#define maxN 100
#define maxW 10000
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;

int dp[maxN + 1][maxW + 1];
int n, W;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> W;
    vector<int> v(n);
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> w[i];
    }
    memset(dp, 0, sizeof(dp));
    int ans;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y <= W; y++) {
            if (y < w[x]) {
                dp[x + 1][y] = dp[x][y];
            } else {
                dp[x + 1][y] = max(dp[x][y], dp[x][y - w[x]] + v[x]);
            }
        }
    }
    ans = dp[n][W];
    cout << ans << endl;
    return 0;
}