#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 30;
static const ll MOD = 1e9 + 7;
static const int MAX_N = 510;
static const int MAX_C = 30;
int D[MAX_C][MAX_C];
int c[MAX_N][MAX_N];
int cost[3][MAX_C]; // cost[i][j] := x+yを3で割ったあまりがiの座標(x,y)をj色にしたときのコストの和

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, C;
    cin >> N >> C;
    rep(i, C)
    {
        rep(j, C)
        {
            cin >> D[i][j]; // i->jにするのに必要なコスト
        }
    }
    // vector<vector<int>> c(N, vector<int>(N));
    rep(i, N)
    {
        rep(j, N)
        {
            cin >> c[i][j]; // 現在の(i,j)の色
            --c[i][j];
        }
    }

    // (i, j)の余りに応じて全てをc0に変えたときの総コスト
    rep(c0, C)
    {
        rep(i, N)
        {
            rep(j, N)
            {
                cost[(i + j) % 3][c0] += D[c[i][j]][c0];
            }
        }
    }

    int res = INF;
    rep(c0, C)
    {
        rep(c1, C)
        {
            rep(c2, C)
            {
                if (c0 == c1 || c0 == c2 || c1 == c2) {
                    continue;
                }
                int tmp = (cost[0][c0] + cost[1][c1] + cost[2][c2]);
                res = min(res, tmp);
            }
        }
    }
    cout << res << endl;

    return 0;
}