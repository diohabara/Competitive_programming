#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

void dfs(int v, vector<bool>& tmp, const vector<vector<int>>& g) {
  if (tmp[v]) return;  // if you have arrived v
  tmp[v] = true;
  for (auto& u : g[v]) {
    dfs(u, tmp, g);
  }
}

int main() {
  // input
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  rep(_, M) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
  }

  // solve
  ll ans = 0;
  // count the number of cities that each v can reach
  rep(v, N) {
    vector<bool> tmp(N);
    dfs(v, tmp, G);
    ans += count(tmp.begin(), tmp.end(), true);
  }
  cout << ans << endl;
}
