#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
int main()
{
    int N;
    cin >> N;
    vector<int> G[N], cost[N];
    for (int i = 0; i < N - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        G[u].push_back(v);
        G[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    vector<int> res(N, -1);
    res[0] = 0;
    stack<int> s;
    s.push(0);
    while (!s.empty()) {
        int v = s.top();
        s.pop();
        for (int i = 0; i < G[v].size(); i++) {
            int u = G[v][i];
            int w = cost[v][i];

            if (res[u] != -1)
                continue;
            res[u] = (res[v] + w) % 2;
            s.push(u);
        }
    }

    for (int i = 0; i < N; i++)
        cout << res[i] << endl;
    return 0;
}
