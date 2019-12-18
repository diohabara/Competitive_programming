#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<vector<ll>> graph(N);
    vector<pair<int, int>> vp;
    rep(i, N - 1)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].emplace_back(b);
        graph[b].emplace_back(a);
        vp.emplace_back(a, b);
    }

    ll k = 0;
    map<pair<ll, ll>, ll> mp; // 辺をキーにして,その色を値にしている
    vector<ll> c(N); // c[i]: iからの辺の色
    vector<bool> used(N); // iへ移動済みかどうか

    // 0からBFS
    queue<ll> que;
    used[0] = true;
    que.emplace(0);
    while (!que.empty()) {
        ll v = que.front();
        que.pop();
        // kは最大の次数
        k = max(k, (ll)graph[v].size());
        ll cur = 1; // 現在の色
        for (auto u : graph[v]) {
            // もし移動済みならスキップ
            if (used[u]) {
                continue;
            }
            // vからの辺の色が現在の色と同じなら色を変える
            if (cur == c[v]) {
                cur++;
            }
            c[u] = mp[make_pair(u, v)] = mp[make_pair(v, u)] = cur++; // 辺の色を変える
            used[u] = true; // uは通った
            que.emplace(u); // 次はuから別の辺に行く
        }
    }
    cout << k << endl;
    for (auto k : vp) { // 辺から色を出力
        cout << mp[k] << endl;
    }
    return 0;
}