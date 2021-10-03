#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

/**
 * return: <distance, index>
 * return furthest node with distance
 */
pair<ll, ll> get_furthest_node(const vector<vector<ll>> graph, const ll from,
                               const ll parent) {
  queue<ll> Q;
  Q.push(from);
  vector<ll> dist(graph.size(), INF);
  dist[from] = 0;
  int furthest_node;
  while (Q.size()) {
    ll now = Q.front();
    Q.pop();
    furthest_node = now;
    for (ll next : graph[now]) {
      if (next == parent) continue;
      if (dist[next] == INF) {
        dist[next] = dist[now] + 1;
        Q.push(next);
      }
    }
  }
  return make_pair(dist[furthest_node], furthest_node);
}

int main() {
  // input
  int N;
  cin >> N;
  vector<vector<ll>> graph(N);
  rep(_, N - 1) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  // solve
  auto p = get_furthest_node(graph, 0, -1);
  auto q = get_furthest_node(graph, p.second, -1);
  cout << q.first + 1 << endl;
}
