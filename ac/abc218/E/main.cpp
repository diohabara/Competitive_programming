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
  vector<tuple<int, int, int>> edges(M);
  rep(i, M) {
    ll a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    edges[i] = make_tuple(a, b, c);
  }

  // solve
  sort(edges.begin(), edges.end(),
       [](auto& lhs, auto& rhs) { return get<2>(lhs) < get<2>(rhs); });
  dsu d(N);
  ll res = 0;
  for (auto [a, b, c] : edges) {
    /** choose unconnected node
     * or cost is minus
     */
    if (d.leader(a) != d.leader(b) || c < 0) {
      d.merge(a, b);
    } else {
      res += c;
    }
  }
  cout << res << endl;
}
