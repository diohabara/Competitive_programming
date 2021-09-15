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

void dfs(int cur, int prev, vector<int>& ans,
         const vector<vector<int>>& edges) {
  ans.push_back(cur);
  for (auto next : edges[cur]) {
    if (next == prev) continue;
    dfs(next, cur, ans, edges);
    ans.push_back(cur);
  }
}

int main() {
  // input
  int N;
  cin >> N;
  vector<vector<int>> edges(N);
  vector<bool> visited(N);
  rep(i, N - 1) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    edges[a].push_back(b);
    edges[b].push_back(a);
  }
  rep(i, N) { sort(edges[i].begin(), edges[i].end()); }

  // solve
  // DFS
  vector<int> ans;
  dfs(0, -1, ans, edges);
  rep(i, ans.size()) {
    if (i) cout << " ";
    cout << ans[i] + 1;
  }
  cout << endl;
}
