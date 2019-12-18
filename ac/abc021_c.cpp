#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
ll n, a, b, m;
ll saitan[110]; // aからの最短距離
ll cnt[110]; // aからiまでの最短距離で来れる回数
vector<ll> graph[110];

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> a >> b;
    cin >> m;
    a--, b--;
    for (int i = 0; i < m; i++) {
      ll x, y;
      cin >> x >> y;
      x--, y--;
      graph[x].push_back(y);
      graph[y].push_back(x);
    }
    for (int i = 0; i < n; i++) {
      saitan[i] = INF;
      cnt[i] = 0;
    }
    
    queue<ll> q;
    q.push(a);
    saitan[a] = 0;
    cnt[a] = 1;
    while(!q.empty()) {
      ll u = q.front();
      q.pop();
      if (u == b) {
        break;
      }
      for (auto v : graph[u]) {
        // 初めて到達したとき
        if (saitan[v] == INF) {
          saitan[v] = saitan[u] + 1;
          (cnt[v] += cnt[u]) %= MOD;
          q.push(v);
        } else if (saitan[v] == saitan[u] + 1){ // 他に最短経路がある
          (cnt[v] += cnt[u]) %= MOD;
        }
      }
    }
    cout << (cnt[b]) % MOD << endl;
    return 0;
}
