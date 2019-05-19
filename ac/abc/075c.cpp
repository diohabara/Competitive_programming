#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const int limit = 50;
int n, m;
int a[limit], b[limit];

bool graph[limit][limit];
bool visited[limit];

void dfs(int v)
{
    // vを起点とする
    // vを到達済みとする
    visited[v] = true;
    // vから伸びる辺を通って行ける点でDFSをする
    for (int v2 = 0; v2 < n; v2++) {
        if (graph[v][v2] && !visited[v2]) {
            dfs(v2);
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        // a，b間での辺があるとする
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    int ans = 0;

    for (int i = 0; i < m; i++) {
        // ある辺がなくなったとする
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;

        // すべての点に行けないとする
        for (int j = 0; j < n; j++) {
            visited[j] = false;
        }

        // 0からdfsをする
        dfs(0);

        // もし行けない点が存在したらans++
        bool bridge = false;
        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                bridge = true;
                break;
            }
        }
        if (bridge) {
            ans++;
        }
        // 再びgraphを初期化する
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }

    cout << ans << endl;

    return 0;
}