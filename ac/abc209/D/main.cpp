#include <bits/stdc++.h>

#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
using namespace atcoder;
using namespace boost::multiprecision;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int N, Q;
  cin >> N >> Q;
  vector<vector<int>> graph(N);
  vector<ll> c(Q), d(Q);
  rep(i, N - 1) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  rep(i, Q) {
    cin >> c[i] >> d[i];
    c[i]--, d[i]--;
  }

  // solve
  vector<int> dist(N, -1);
  // BFS
  queue<int> q;
  q.push(0);  // consider 0 as a root node
  dist[0] = 0;
  while (!q.empty()) {
    int from = q.front();
    q.pop();
    for (int& to : graph[from]) {
      if (dist[to] != -1) {
        continue;
      }
      dist[to] = dist[from] + 1;
      q.push(to);
    }
  }
  rep(i, Q) {
    if (dist[c[i]] % 2 == dist[d[i]] % 2) {
      puts("Town");
    } else {
      puts("Road");
    }
  }
}
