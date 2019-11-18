#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int MAX = 100;
static const int WHITE = 0; // V-T
static const int BLACK = 1; // T

int n, M[MAX][MAX];

int prim()
{
    int u, minv;
    int d[MAX]; // d[u]: Tに属する頂点とV-Tに属するuから頂点を繋ぐ辺の中で重みが最小の辺の重みを記録
    int p[MAX]; // p[u]: MSTにおける頂点uの親を記録
    int color[MAX]; // 訪問状態を記録

    // initialize
    rep(i, n)
    {
        d[i] = INF;
        p[i] = -1;
        color[i] = WHITE;
    }
    d[0] = 0;

    while (1) {
        minv = INF;
        u = -1;
        rep(i, n)
        {
            // uは最小の経路がある かつ uへは未完了
            if (d[i] < minv && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }

        // 更新できる辺がないときに終了
        if (u == -1) {
            break;
        }

        color[u] = BLACK;
        rep(v, n)
        {
            // vは未完了 かつ u->vに道はある
            if (color[v] != BLACK && M[u][v] != INF) {
                // vへの経路を最小に更新
                if (M[u][v] < d[v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                }
            }
        }
    }

    int sum = 0;
    rep(i, n)
    {
        if (p[i] != -1) {
            sum += M[i][p[i]];
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    rep(i, n)
    {
        rep(j, n)
        {
            int e;
            cin >> e;
            M[i][j] = (e == -1) ? INF : e;
        }
    }

    cout << prim() << endl;
    return 0;
}