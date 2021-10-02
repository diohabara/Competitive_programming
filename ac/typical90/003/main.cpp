#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const ll MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;

void get_dist(int start, int N, vector<ll>& dist, vector<vector<ll>>& G) {
  rep(i, N) { dist[i] = INF; }

  queue<int> Q;
  Q.push(start);
  dist[start] = 0;
  while (!Q.empty()) {
    int pos = Q.front();
    Q.pop();
    for (auto& to : G[pos]) {
      if (dist[to] == INF) {
        dist[to] = dist[pos] + 1;
        Q.push(to);
      }
    }
  }
}

int main() {
  // input
  int N;
  cin >> N;
  vector<vector<ll>> graph(N);
  rep(_, N - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  // solve
  vector<ll> dist(N);
  get_dist(0, N, dist, graph);
  int maxn1 = -1, maxid1 = -1;
  rep(i, N) {
    if (maxn1 < dist[i]) {
      maxn1 = dist[i];
      maxid1 = i;
    }
  }

  get_dist(maxid1, N, dist, graph);
  ll maxn2 = 1;
  rep(i, N) { maxn2 = max(maxn2, dist[i]); }
  cout << maxn2 + 1 << endl;
}
