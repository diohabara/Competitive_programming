#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
int H, W;
int c[10][10];
int dist[10][10];

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> H >> W;
    rep(y, 10)
    {
        rep(x, 10)
        {
            cin >> c[y][x];
        }
    }
    ll res = 0;
    // warshall-floyd法でi->jの最小値を求める
    rep(k, 10) {
        rep(i, 10) {
            rep(j, 10) {
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }


    rep(y, H)
    {
        rep(x, W)
        {
            int a;
            cin >> a;
            if (a >= 0) {
                res += c[a][1];
            }
        }
    }
    cout << res << endl;

    return 0;
}