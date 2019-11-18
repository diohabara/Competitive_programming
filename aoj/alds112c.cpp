#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
static const int INF = 1 << 21;
static const int MOD = 1e9 + 7;
static const int MAX = 10000;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n;
vector<pair<int, int>> adj[MAX]; // 重み付き有向グラフの隣接リスト表現

void dijkstra()
{
    priority_queue<pair<int, int>> PQ;
    int color[MAX];
    int d[MAX];
    rep(i, n)
    {
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    PQ.push(make_pair(0, 0));
    color[0] = GRAY;

    while (!PQ.empty()) {
        pair<int, int> f = PQ.top();
        PQ.pop();
        int u = f.second;

        color[u] = BLACK;

        // 最小値を取り出し,それが最短でなければ無視
        if (d[u] < f.first * (-1)) {
            continue;
        }

        rep(j, adj[u].size())
        {
            int v = adj[u][j].first;
            if (color[v] == BLACK) {
                continue;
            }
            if (d[u] + adj[u][j].second < d[v]) {
                d[v] = d[u] + adj[u][j].second;
                // priority_queueはデフォルトで大きい値を優先するため-1を掛ける
                PQ.push(make_pair(d[v] * (-1), v));
                color[v] = GRAY;
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

    int k, u, v, c;
    cin >> n;

    rep(i, n)
    {
        cin >> u >> k;
        rep(j, k)
        {
            cin >> v >> c;
            adj[u].push_back(make_pair(v, c));
        }
    }

    dijkstra();

    return 0;
}