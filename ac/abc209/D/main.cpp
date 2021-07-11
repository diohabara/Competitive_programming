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
  vector<ll> a(N), b(N);
  vector<ll> c(Q), d(Q);
  rep(i, N - 1) { cin >> a[i] >> b[i]; }
  rep(i, Q) { cin >> c[i] >> d[i]; }

  // solve
  vector<vector<int>> G(N);
  rep(i, N - 1) {
    a[i]--, b[i]--;
    G[a[i]].push_back(b[i]);
    G[b[i]].push_back(a[i]);
  }
  queue<int> que;
  vector<int> dist(N, -1);
  que.push(0);
  dist[0] = 0;
  while (!que.empty()) {
    int cur = que.front();
    que.pop();
    for (int x : G[cur]) {
      if (dist[x] == -1) {
        dist[x] = dist[cur] + 1;
        que.push(x);
      }
    }
  }
  rep(i, Q) {
    c[i]--, d[i]--;
    if (dist[c[i]] % 2 == dist[d[i]] % 2) {
      cout << "Town" << endl;
    } else {
      cout << "Road" << endl;
    }
  }
}
