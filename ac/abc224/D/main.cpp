#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

int main() {
  // input
  int M;
  cin >> M;
  vector<vector<int>> graph(9);
  rep(i, M) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  vector<bool> p(9);
  rep(i, 8) {
    int x;
    cin >> x;
    x--;
    p[x] = true;
  }

  // solve
}
