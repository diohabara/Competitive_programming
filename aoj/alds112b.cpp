#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int MAX = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

void dijkstra()
{
    int minv;
    int d[MAX]; // d[v]: Sからvに行ける最小コスト
    int color[MAX];

    rep(i, n)
    {
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;

    while (1) {
        minv = INF;
        int u = -1;
        rep(i, n)
        {
            if (d[i] < minv && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1) {
            break;
        }
        color[u] = BLACK;
        rep(v, n)
        {
            if (color[v] != BLACK && M[u][v] != INF) {
                if (d[u] + M[u][v] < d[v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }

    rep(i, n)
    {
        cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
    }
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
            M[i][j] = INF;
        }
    }

    int k, c, u, v;
    rep(i, n)
    {
        cin >> u >> k;
        rep(j, k)
        {
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}