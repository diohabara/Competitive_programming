#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

ll N, M;
vector<ll> tree[1010]; // tree[親] = {子}
ll BC[1010];

ll dfs(ll i)
{
    if (0 < BC[i]) {
        return BC[i]; // もし値があるならそれを返す
    }
    ll _min = INF;
    for (ll j : tree[i]) { // 現在の木についている全ての木を探索する
        _min = min(_min, dfs(j)); // 探索を最適にするから,その子の中から最小のものになる
    }
    BC[i] = _min; //現在の木をその値で更新する

    return _min;
}

ll ans = 0;
void dfs2(ll i)
{
    for (ll j : tree[i]) {
        dfs2(j);
        ans += BC[j] - BC[i]; // BC[現在の木] - BC[現在の木に付いている木]
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 1; i < N; ++i) {
        ll p;
        cin >> p;
        tree[p].push_back(i);
    }
    for (ll i = 0; i < M; ++i) {
        ll b, c;
        cin >> b >> c;
        BC[b] = c;
    }

    dfs(0);
    BC[0] = 0;
    dfs2(0);

    cout << ans << endl;
}
