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
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    A[a].push_back(b);
    A[b].push_back(a);
  }

  // solve
  queue<int> q;
  vector<int> dist(N, INF);
  vector<int> cnt(N);
  q.push(0);
  dist[0] = 0;
  cnt[0] = 1;

  // BFS
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (auto& u : A[v]) {
      if (dist[u] == INF) {
        dist[u] = dist[v] + 1;
        cnt[u] = cnt[v];
        q.push(u);
      } else if (dist[u] == dist[v] + 1) {
        cnt[u] += cnt[v];
        cnt[u] %= MOD;
      }
    }
  }
  cout << cnt[N - 1] << endl;
}
