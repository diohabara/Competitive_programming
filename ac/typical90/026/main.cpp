#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

void dfs(vector<vector<int>>& graph, vector<int>& color, int current_node,
         int current_color) {
  color[current_node] = current_color;
  for (auto& next_node : graph[current_node]) {
    if (color[next_node] != -1) continue;
    dfs(graph, color, next_node, current_color ^ 1);
  }
}

int main() {
  // input
  int N;
  cin >> N;
  vector<vector<int>> graph(N);
  rep(i, N - 1) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  // solve
  vector<int> v1, v2;
  vector<int> color(N, -1);
  // bipartite graph coloring
  dfs(graph, color, 0, 0);
  // choose vertices by color
  rep(i, N) {
    if (color[i] == 0) {
      v1.push_back(i);
    } else {
      v2.push_back(i);
    }
  }
  // output
  if (v1.size() < v2.size()) {
    rep(i, N / 2) {
      if (i) cout << " ";
      cout << v2[i] + 1;
    }
  } else {
    rep(i, N / 2) {
      if (i) cout << " ";
      cout << v1[i] + 1;
    }
  }
  cout << endl;
}
