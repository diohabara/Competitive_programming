#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int N, Q, K;
const int limit = 100010;
using edge = struct {
    int to;
    ll cost;
};
vector<edge> tree[limit]; // 隣接リスト
ll depth[limit];

// あるノードの距離を決める
// cur:現在の頂点, p: curの親ノード, d: 現在の距離
void dfs(int cur, int p, ll d)
{
    depth[cur] = d;
    for (auto& e : tree[cur]) { // 隣接するノードの距離を更新
        if (e.to == p) {
            continue;
        }
        dfs(e.to, cur, d + e.cost);
    }
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    rep(i, N-1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        tree[a].push_back({ b, c });
        tree[b].push_back({ a, c });
    }
    cin >> Q >> K;
    --K;
    dfs(K, -1, 0);
    rep(i, Q)
    {
        int x, y;
        cin >> x >> y;
        --x, --y;
        cout << depth[x] + depth[y] << endl;
    }

    return 0;
}