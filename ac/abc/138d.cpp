#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

vector<int> graph[200000];
ll val[200000];

void dfs(int pos, int cnt, ll sum)
{
    val[cnt] += sum;
    for (auto& v : graph[cnt]) {
        if (v != pos) {
            dfs(cnt, v, val[cnt]);
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, Q;
    cin >> N >> Q;
    vector<int> pos(Q), x(Q);
    rep(i, N - 1)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<ll> ans(N);
    rep(i, Q)
    {
        int pos, x;
        cin >> pos >> x;
        val[--pos] += x;
    }
    dfs(-1, 0, 0);
    rep(i, N)
    {
        if (i) {
            cout << " ";
        }
        cout << val[i];
    }
    cout << endl;
    return 0;
}