#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << 21;
const ll MOD = 1e9 + 7;
static const int N = 100;

int n;
int M[N][N];
int d[N]; // 距離で訪問状態を管理する

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    rep(i, n)
    {
        d[i] = INF;
    }
    d[s] = 0;
    int u;
    while (!q.empty()) {
        u = q.front();
        q.pop();
        rep(v, n)
        {
            if (M[u][v] == 0) { // u->vに行けないなら飛ばす
                continue;
            }
            if (d[v] != INF) { // d[v]に行ったことがあるなら飛ばす
                continue;
            }
            d[v] = d[u] + 1; // u->vが始めてなら距離を更新
            q.push(v); // queueにvを入れる
        }
    }
    rep(i, n)
    {
        cout << i + 1 << " " << ((d[i] == INF) ? (-1) : d[i]) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int u, k, v;
    cin >> n;
    rep(i, n)
    {
        rep(j, n)
        {
            M[i][j] = 0;
        }
    }
    rep(i, n)
    {
        cin >> u >> k;
        u--;
        rep(j, k)
        {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    bfs(0); // 0から出発

    return 0;
}